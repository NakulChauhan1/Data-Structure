//https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/

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

// can be done by seperating even list with odd list.
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
       
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* curr = head;
        ListNode* end = head;
        
        while(curr->next){
            curr = curr->next;
            end = curr;
        }
        
        //cout<<end->val<<endl;
        curr = head;
        int i = 1;
        ListNode* t = end;
        while(curr){
            if ( curr == t )                          //t is end of original linked list
                break;
         if ( curr->next == t && i%2 != 0 ){
             //cout<<i<<endl;
             end->next = curr->next;
             end = end->next;
             curr->next = curr->next->next;
             end->next = NULL;
             break;
         }
            if ( i%2 != 0 ){
                end->next = curr->next;
                //cout<<curr->next->val<<endl;
                end = end->next;
                curr->next = curr->next->next;
                end->next = NULL;
            }
            curr = curr->next;
            i++;i++;
        }
        
        return head;
       /* Using extra space and without changing links 
       if (head == NULL || head->next == NULL)
            return head;
        
        vector<int> temp;
        ListNode* curr = head;
        ListNode* even = head->next;
        int i = 1;
        while(curr){
            if ( i%2 == 0 )
                temp.push_back(curr->val);
            
            if ( i >= 3 && i%2 != 0 ){
                even->val = curr->val;
                even = even->next;
            }
            i++;
            curr = curr->next;
        }
        for ( int i = 0; i<temp.size(); i++ ){
            cout<<temp[i]<<endl;
            even->val = temp[i];
            even = even->next;
        }
        return head;*/
        
    }
};