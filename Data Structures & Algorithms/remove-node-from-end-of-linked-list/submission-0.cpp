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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        stack<ListNode*>stk;
        ListNode* temp=head;
        while(temp!=nullptr){
            stk.push(temp);
            temp=temp->next;
        }
        if(stk.size()==1)
        return nullptr;

        while(n>0){
            ListNode* curr=stk.top();
            stk.pop();
            n--;
            if(stk.size()==1&&n==1)
            {
                head=curr;
                return head;
            }
        }
        ListNode* curr=stk.top();
        curr->next=curr->next->next;
        return head;
        
    }
};
