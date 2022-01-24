/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
        int l1=0,l2=0,diff=0;
		while(ptr1!=NULL){
            l1++;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL){
            l2++;
            ptr2=ptr2->next;
        }
        ptr1=headA;
        ptr2=headB;
        if(l1>l2)
            diff=l1-l2;
        else
            diff=l2-l1;
        while(diff!=0)
        {
            if(l1>l2)
                ptr1=ptr1->next;
            else
                ptr2=ptr2->next;
            diff--;
        }
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1==ptr2)
                return ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
        
	}
};