#include<cstdlib>
#include<stdio.h>
#include <cstring>
#include<string.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result;
        ListNode *resulthead = nullptr;
     //   result->next = nullptr;
        int sum,carry=0,count=0;
        while(l1 && l2)
        {
            count++;
            result = new ListNode;
            sum = l1->val +l2->val + carry;
            result->val = sum%10;
            carry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
            if (resulthead ==nullptr)
            {
                resulthead = result;
            }
            else
            {
                ListNode *temp = resulthead;
                while(temp->next)
                {
                    temp = temp->next;
                }
                temp->next = result;
            }
        }
        while(l1)
        {
            count++;
            cout<<"Count value is "<<count<<endl;
            result = new ListNode;
            result->next = nullptr;
            sum = l1->val + carry;
            cout<<"Finak sum value is "<<sum<<"and carry is"<<carry<<endl;
            carry = sum/10;
            result->val = sum%10; 
            
            if (resulthead == nullptr)
            {
                resulthead = result;
            }
            else
            {
                ListNode *temp = resulthead;
                while(temp->next)
                {
                    cout<<"temp value is "<<temp->val<<endl;
                    temp = temp->next;
                }
                cout<<"temp value is "<<temp->val<<endl;
                cout<<"==========="<<endl;
                temp->next = result;
                temp->next->next = nullptr;

            }
            l1 = l1->next;
        }
        while(l2)
        {
            cout<<"Sorry for coming"<<endl;
             result = new ListNode;
             result->next = nullptr;
            sum = l2->val + carry;
            carry = sum/10;
            result->val = sum%10;    
            
            if (resulthead ==nullptr)
            {
                resulthead = result;
            }
            else if(l2)
            {
                ListNode *temp = resulthead;
                while(temp->next)
                {
                    temp = temp->next;
                }
                temp->next = result;

            }   
            l2 = l2->next;    
        }
        if(carry)
        {
            ListNode *result = new ListNode;
            result->val = carry;
            result->next=nullptr;

            if (resulthead == nullptr)
            {
                resulthead = result;
            }
             ListNode *temp = resulthead;
            while(temp->next)
            {
                    temp = temp->next;
            }
                temp->next = result; 
        }
        return resulthead;
    }
};
