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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode* temp=list1;
        // int n=0;
        // while(temp!=NULL)
        // {
        //     n++;
        //     temp=temp->next;
        // }
        
        int k=0;
        temp=list1;
        while(k!=a-1)
        {
            k++;
            temp=temp->next;
        }
        ListNode* next=temp->next;
        ListNode* end=temp;
         while(k!=b)
        {
            k++;
            end=end->next;
        }
        ListNode* curr=list2;
        while(curr->next!=NULL)
        {
           curr=curr->next;
            
        }
        temp->next=list2;
        curr->next=end->next;
        
        return list1;
    }
};