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
    void reorderList(ListNode* head) {
        if(head==NULL and head->next==NULL)
            return;
        stack<ListNode*> s;
        ListNode* copy=head;
        while(copy)
        {
            s.push(copy);
            copy=copy->next;
        }
        
        int sz=s.size()/2;
        copy=head;
        for(int i=0;i<sz;i++)
        {
            
            ListNode* t=s.top();
            s.pop();
            cout<<copy->val<<" "<<t->val<<endl;
            t->next=copy->next;
            copy->next=t;
            copy=copy->next->next;
        }
        copy->next=NULL;
        
        
    }
};