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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if ( head == NULL )
            return NULL;
        
        ListNode * ptr1 = head;
        ListNode * ptr2 = head;
        
        while ( ptr1 ){
            
            if ( ptr1->next == NULL )
            {
                ptr2->val = ptr1->val;
                break;  
            } 
            
            if ( ptr1->val != ptr1->next->val )
            {
                //ptr2 = ptr2->next;
                ptr2->val = ptr1->val;
                ptr2 = ptr2->next;
                //continue;
            }
            ptr1 = ptr1->next;
        }
        ptr2->next = NULL;
        return head;
        /*ListNode * ptr = head;
        while ( ptr ){
            if ( ptr->next == NULL )
                break;
            if ( ptr->val == ptr->next->val )
            {
                ListNode * p = ptr->next;
                ptr->next = ptr->next->next;
                p->next = NULL;
                delete p;
            }
            ptr = ptr->next;
        }
        return head;*/
    }
};