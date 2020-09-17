//https://leetcode.com/problems/rotate-list/

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

//https://www.geeksforgeeks.org/rotate-a-linked-list/
//can be done by making linked list circular and then moving k+1 times forward from base 
//and then making that node as last node and appropriate node as head.
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if ( head == NULL )
            return NULL;
        
        if ( k <= 0 || head->next == NULL )
            return head;
    
        int n = 0;
        ListNode* ptr = head;
        while (ptr){
            n++;
            ptr = ptr->next;
        }
        k = k%n;                    //since after n times rotations, original list is                                            obtained, so to decrease large value into small
        
        ptr = head;
        while(k--){
            ListNode* prev = ptr;
            while( ptr->next ){
                prev = ptr;
                ptr = ptr->next;
            }
            prev->next = NULL;
            ptr->next = head;
            head = ptr;
        }
        return head;
    }
};