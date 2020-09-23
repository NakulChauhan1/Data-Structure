//https://www.geeksforgeeks.org/remove-occurrences-duplicates-sorted-linked-list/


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
        
        if ( head == NULL || head->next == NULL )
            return head;
        
        while (head->val == head->next->val)
        {
            if ( head->val == head->next->val ){
                while( head->next != NULL && head->val == head->next->val){
                     head = head->next;
                }
                    head = head->next;
            }
            if ( head == NULL || head->next == NULL )
                return head;
        }
        
        ListNode* ptr1 = head;
        ListNode* prev = head;
        while(ptr1->next){
            if(ptr1->val == ptr1->next->val){
                while(ptr1->next != NULL && ptr1->val == ptr1->next->val){
                    ptr1 = ptr1->next;
                }
                if ( ptr1->next == NULL )
                {
                    prev->next = NULL;
                    continue;
                }    
                prev->next =  ptr1->next;
                ptr1 = ptr1->next;
                continue;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
        return head;
        
        /*  In this was deleting the duplicate element one by one, for eg. if there are 3 4s then first i was changing link                for first 4 then other and so on. But idea was to remove in only one traversal.
        
        if ( head == NULL || head->next == NULL )
            return head;
        
        
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        bool f = 0, ff = 0;
        while(ptr1->next){
            
            if ( head->val == head->next->val ){
                head->next = head->next->next;
                ff = 1;
                ptr1  = head;
                continue;
            }
            
            if ( ff == 1 ){
                head = head->next;
                ff = 0;
                ptr1 = head;
                continue;
            }
            
            if ( ptr1->val == ptr1->next->val ){
                ptr1->next = ptr1->next->next;
                f = 1;
                continue;
            }
            if ( f == 1 ){
                ptr2->next = ptr2->next->next;
                f = 0;
                ptr1 = ptr2;
            }
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }
        
        if ( ff = 1 && head->next == NULL)
            return head->next;
        if ( f = 1 && ptr2->next == NULL && ptr2->next->next == NULL )
            ptr2->next = ptr2->next->next;
        
        return head;*/
        
        
        
        
        /* First attempt approach
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        
    while ( ptr2 ){
        if ( ptr1->next == NULL || ptr1->next->next == NULL )
            break;
        ListNode* prev; 
        while ( ptr1->val != ptr1->next->val ){
            prev = ptr1;
            ptr1 = ptr1->next;
        }
        
        ptr2 = prev->next;
        //ListNode* t;
        while ( ptr2->val == ptr2->next->val ){
            //t = ptr2;
            ptr2 = ptr2->next;
            //delete ptr2;
        }
        //t = ptr2;
        ptr2 = ptr2->next;
        //delete t;
        
        prev->next = ptr2;
    }
        if ( ptr1->next->next == NULL )
            if ( ptr1->val == ptr1->next->val )
                ptr1->next = NULL;
        
        
        return head;*/
    }
};