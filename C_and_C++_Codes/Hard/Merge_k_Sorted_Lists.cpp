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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *temp = new ListNode;
        temp = nullptr;
        vector<int> r={};
        int i;
        for(i=0;i<lists.size();i++)
        {
            cout<<"Sorry i am in"<<endl;
            temp = lists[i];
            while(temp)
            {
                r.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(r.begin(),r.end());
        ListNode *resulthead =new ListNode;
        resulthead = temp;
        for(i=0;i<r.size();i++)
        {
            cout<<"Sorry i am in 2"<<endl;
            if(resulthead == nullptr)
            {
                ListNode *temp2 = new ListNode;
                temp2->val = r[i];
                temp2->next = nullptr;
                resulthead = temp2;
            }
            else
            {
                ListNode *temp2 = resulthead;
                while(temp2->next)
                {
                    temp2 = temp2->next;
                }
                ListNode *temp3 = new ListNode;
                temp3->val = r[i];
                temp3->next = nullptr;
                temp2->next = temp3;
            }
        }
        
        return resulthead;
    }
};
