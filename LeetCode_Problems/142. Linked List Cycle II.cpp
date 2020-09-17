/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


//https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/
//https://www.youtube.com/watch?v=LUm2ABqAs1w
class Solution {
public:
    class node{
        public:
        int val = -1;
    };
    
    ListNode *detectCycle(ListNode *head) {
        
        map<ListNode *, node> status;
        ListNode * ptr = head;
        int pos = 0;
         while( ptr ){
             if ( status[ptr].val == -1 ){
                 status[ptr].val = pos;
                 ptr = ptr->next;
                 pos++;
                 continue;
             }
             break;             
         }
        return ( ptr == NULL )? NULL : ptr ;
    }
};