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

    ListNode* findmiddle (ListNode*head){
        if(!head ||!head->next){
            return head;
        }
        ListNode*slow=head;
        ListNode*fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast= fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode* merge(ListNode*left, ListNode* right){
        
        ListNode* dummy =new ListNode(-1);
        ListNode* temp = dummy;
        ListNode*first =left;
        ListNode*second = right;
        while(first!=NULL && second!=NULL){
            if(first->val<second->val){
                temp->next = first;
                temp = first;
                first=first->next;
            }
            else{
                temp->next =second;
                temp = second;
                second = second->next;
            }
        }
        if(first){
            temp->next=first;
        }
        if(second){
            temp->next=second;
        }
        return dummy->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if( !head ||!head->next){
            return head;
        }
        ListNode*middle ;
        ListNode*right;
        ListNode* left = head;
        // ListNode* right;
        
        middle = findmiddle(head);
        right=middle->next;
        middle->next=NULL;
        
        // right = middle->next;
        left =sortList(left);
        right= sortList(right);
       
        return  merge(left,right);;
    }
};