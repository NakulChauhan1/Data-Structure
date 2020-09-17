/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/
//can be done by making linked list circular
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if ( headA == NULL || headB == NULL )
            return NULL;
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        int la = 0, lb = 0;
        while( curr1 || curr2 ){
            if( curr1 ){
                la++;
                curr1 = curr1->next;
            }
            if( curr2 ){
                lb++;
                curr2 = curr2->next;
            }
        }
        //cout<<la<<" "<<lb<<endl;
        int k = ( la>lb )?(la-lb):(lb-la);
        //cout<<k<<endl;
        
        curr1 = headA;
        curr2 = headB;
        for ( int i=0; i<k; i++ ){
            if ( la>lb ){
                curr1 = curr1->next;
            }else if ( la<lb ){
                curr2 = curr2->next;
            }
            else 
                break;
        }
        
        while (curr1){
            if ( curr1 == curr2 )
                return curr1;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return NULL;
    }
};