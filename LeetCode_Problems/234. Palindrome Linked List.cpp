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
    bool isPalindrome(ListNode* head) {
        if ( head == NULL )return 1;
        ListNode* s = head;
        ListNode* e = head;
        string p;
        while(e){
            p += (char)(e->val);
            e = e->next;
        }
        cout<<p<<endl;
        
        int i , j  = p.size()-1;
        for( i = 0; i<j; i++ ){
            if ( p[i] == p[j] )
            {
                j--;
                continue;
            }
            return 0;
            break;
        }
        return 1;
        
        /* Valid Solution:
        stack<int> s;
        ListNode* curr = head;
        
        while( curr ){
            s.push(curr->val);
            curr = curr->next;
        }
        
        curr = head;
        while( curr ){
            if ( curr->val == s.top() ){
                s.pop();
                curr = curr->next;
                continue;
            }
            return 0;
        }
        return 1;*/
        
        /* Valid Solution:
        ListNode* curr = head;
        vector<int> arr;
        
        while( curr ){
            arr.push_back(curr->val);
            curr = curr->next;
        }
        
        
        
        
        int i = 0, j = arr.size()-1;
        for ( i = 0; i<j; i++ ){
            if ( arr[i] == arr[j] ){
                j--;
                continue;
            }
            return 0;
        }
        return 1;*/
        
    }
};