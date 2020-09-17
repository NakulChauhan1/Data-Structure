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

//can be done with recursion also
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if ( head == NULL )
            return NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = curr->next;
        
        while ( curr ){
            curr->next = prev;
            prev = curr;
            curr = fwd;
            if ( fwd != NULL)
                fwd = fwd->next;
        }
        head = prev;
        return head;
    }
};