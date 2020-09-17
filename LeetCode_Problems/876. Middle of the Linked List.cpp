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
    ListNode* middleNode(ListNode* head) {
        int l = 0;
        for ( ListNode* curr = head; curr != NULL; curr= curr->next ) l++;
        ListNode* curr = head;
        for ( int i =0; i<l/2; i++ ){
            curr = curr->next;
        }
        return curr;
    }
};