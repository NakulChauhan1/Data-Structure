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
    ListNode* partition(ListNode* head, int x) {
        
       /* if ( head == NULL || head->next == NULL )
            return head;
        
        ListNode* lesser = NULL, * greater = NULL, * curr = head;
        
        
        while( curr != NULL && (lesser == NULL || greater == NULL) ){
            if ( curr->val < x )
                lesser = curr;
            else
                greater = curr;
            curr = curr->next;
        }
        
        if ( (lesser == NULL || greater == NULL) )
        {
            return head;
        }
        
        ListNode* greater_h = greater;
        
        curr = head;
        //cout<<lesser->val<< " " <<greater->val;
        while(curr){
            if ( curr->val < x && curr != lesser ){
                lesser->next = curr;
                lesser = lesser->next;
                cout<<lesser->val<<" s ";
                //lesser->next = NULL;
            }
            if ( curr->val >= x && curr != greater )
            {
                greater->next = curr;
                greater = greater->next;
                cout<<greater->val<<" s ";
                //greater->next = NULL;
            }
            //coun
            curr = curr->next;
        }
        lesser->next = greater_h;
        return head;*/
        
        if ( head == NULL || head->next == NULL )
            return head;
        
        ListNode* curr = head, *prev = head, *end = NULL;
        
        while(curr->next){
            curr = curr->next;
        }
        end = curr;
        
        curr = head;
        ListNode* t = end;
        
        ListNode* fhead = new ListNode;
        fhead->next =  head;
        prev = fhead;
        
        while(curr){
            if ( curr == t )
                break;
            if ( curr->val >= x ){
                //cout<<x<<endl;
                prev->next = prev->next->next;
                end->next = curr;
                end = end->next;
                end->next = NULL;
                curr = prev->next; 
                continue;
            }
            prev = curr;
            curr = curr->next;
        }
        cout<<curr->val<<" "<<prev->val<<" "<<end->val;
        if ( curr->val >= x && curr != end ){
                prev->next = prev->next->next;
                end->next = curr;
                end = end->next;
                end->next = NULL;
                //curr = prev->next; 
        }
        return fhead->next;
    }
};