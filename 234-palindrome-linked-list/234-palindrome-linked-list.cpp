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
    ListNode *middle(ListNode *head)
    {
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode *reverse(ListNode *head)
    {
        ListNode *newhead=NULL;
        while(head!=NULL)
        {
            ListNode *next=head->next;
            head->next=newhead;
            newhead=head;
            head=next;
        }
        return newhead;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode *mid = middle(head);
        ListNode *last = reverse(mid->next);
        ListNode *curr = head;
        
        while(last!=NULL)
        {
            if(last->val!=curr->val)
                return false;
            last=last->next;
            curr=curr->next;
        }
        return true;
    }
};