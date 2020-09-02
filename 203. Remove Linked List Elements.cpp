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
//https://www.geeksforgeeks.org/delete-occurrences-given-key-linked-list/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if ( head == NULL || ( head->next == NULL && head->val == val )){
            return NULL;
        }
        
        if ( head->next == NULL && head->val != val ){
            return head;
        }
        
        ListNode* curr = head, *prev = curr;
        while (curr){
            while ( curr && curr->val != val ){
                prev = curr;
                curr = curr->next;            
            }
            if ( curr == NULL )
                break;
            ListNode* del = NULL;
            if ( prev == curr ){
                del = head;
                head = head->next;
                curr = head;
                prev = curr;
                delete del;
                continue;
            }
            del = curr;
            prev->next = curr->next;
            delete del;
            curr = prev->next;
            //curr = curr->next;
        }
        return head;
    }
};