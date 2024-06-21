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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head, *temp2 = head;
        int k_temp = k, nodes=0,tt=0;
        vector<int> v;
        while(temp)
        {
            nodes++;
            if(k_temp==0)
            {
                tt++;
                ListNode *t=temp2;
                while(!v.empty())
                {
                    t->val = v.back();
                    v.pop_back();
                    t = t->next;
                }
                k_temp=k;
                temp2 = temp;
                cout<<"Temp2 value is "<<temp->val<<endl;
                continue;
            }
            k_temp--;
            v.push_back(temp->val);
            temp = temp->next;
        }
        if(k_temp==0 && temp == nullptr)
        {
            temp = head;
            int turns = nodes-tt-k;
            cout<<"nodes   are   "<<nodes<<" k value is "<<k<<" Turns to run are  "<<turns<<endl;
            while(turns)
            {
                temp = temp->next;
                turns--;
            }
                 while(!v.empty())
                {
                    temp->val = v.back();
                    v.pop_back();
                    temp = temp->next;
                }           

        }
        return head;
        
    }
};
