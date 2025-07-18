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
        if(!head || !head->next){
            return NULL;
        }
        ListNode* fast=head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast= fast->next->next;
            slow = slow->next;
            if(slow==fast){
                slow = head;
                
                while(slow!=fast){
                   
                    slow=slow->next;
                    fast= fast->next;
                }
                return slow;
            }

        }
        return NULL;
    }
};