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
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        unordered_map<ListNode*,int> mp;
        while(mp.find(temp)==mp.end() && temp!=NULL){
            mp[temp]++;
            temp=temp->next;
        }
        return temp;
        
    }
};