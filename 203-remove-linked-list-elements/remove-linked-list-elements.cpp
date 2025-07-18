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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        
        dummy->next = head;
        ListNode*curr =head;
        
        ListNode*temp = new ListNode();
        while(curr!=NULL){
            if(curr->val == val){
                
                prev->next=curr->next;
                temp=curr;
                curr= curr->next;
                    delete temp;
                    
            }else{
            prev = curr;
            curr = curr->next;
            }

        }
      ListNode*  result = dummy->next;
delete dummy;
        return result;
    }
};