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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* new_node= new ListNode(-1);
        ListNode* new_head=new_node;
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val<head2->val)
            {
                new_head->next=head1;
                head1=head1->next;
            }
            else
            {
                new_head->next=head2;
                head2=head2->next;
            }
            new_head=new_head->next;
        }
        while(head1!=NULL)
        {
            new_head->next=head1;
            head1=head1->next;
            new_head=new_head->next;
        }
        while(head2!=NULL)
        {
            new_head->next=head2;
            head2=head2->next;
            new_head=new_head->next;
        }
        return new_node->next;
    }
};