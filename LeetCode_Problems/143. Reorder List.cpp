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
        
        if ( head == NULL || head->next == NULL || head->next->next == NULL )
            return;
        
        ListNode* curr = head, * fwd = curr->next, * last = head, * prev_l = NULL;
        
        while(curr->next){
            while( last->next ){
                prev_l = last;
                last = last->next;
            }
            curr->next = last;
            last->next = fwd;
            prev_l->next = NULL;
            curr = fwd;
            //cout<<curr->val<<endl;
            fwd = curr->next;
            last = head;
            if ( curr->next == prev_l )
                break;
            
        }
    }
};