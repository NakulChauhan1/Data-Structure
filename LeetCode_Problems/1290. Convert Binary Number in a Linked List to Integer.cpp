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
    int getDecimalValue(ListNode* head) {
        
        ListNode* curr = head;
        int n = 0;
        while( curr ){
            n++;
            curr = curr->next;
        }
        
        curr = head;
        int decimal = 0;
        while( curr ){
            decimal += curr->val * pow(2, --n);
            curr = curr->next;
        }
        return decimal;        
    }
};