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

/* Was making insert function intitially, but later got to know insertion at the end can be done by using Constructors (parameterised).

ListNode * insertt  ( ListNode* root, int data )
{
    ListNode* temp = new ListNode(data);
    
    if ( root == NULL )
    {
        root = temp;
    }
    else
    {
        ListNode * t = root;
        while ( t->next )
        {
            t = t->next;
        }
        t->next = temp;
    }
    return root;
}
*/



/*
Alternative: Instead of dealing with all the edge cases, just convert the linked lists                    to integers, perform the addition, and convert the sum to a linked list and                  return it
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if ( l1 == NULL || l1->val == 0 && l1->next == NULL )
            return l2;
        if ( l2 == NULL || l2->val == 0 && l2->next == NULL )
            return l1;
        
        
        int n1 = 0, n2 = 0;
        ListNode * ll1 = l1, * ll2 = l2;
        while ( ll1 )
        {
            ll1 = ll1->next;
            n1++;
        }
        while ( ll2 )
        {
            ll2 = ll2->next;
            n2++;
        }
        //cout<<n1<< " "<<n2<<endl;
        
        ListNode * result = new ListNode(0); 
        ListNode * current = result;
        // (struct ListNode *)malloc(sizeof(struct ListNode));
        
        
        if ( n1 > n2)
        {
            //ListNode * tt = NULL;
            int carry = 0;
            while ( l2 )
            {
                int t = l1->val + l2->val + carry;
                if ( t>9 )
                {
                    current->next = new ListNode ( t%10 );
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->next = new ListNode ( t%10 );
                    current = current->next;
                    carry = 0;
                }
                l1 = l1->next;
                l2 = l2->next;
            }
            while ( l1 )
            {
                int t = l1->val + carry;
                if ( t>9 )
                {
                    current->next = new ListNode ( t%10 );
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->next = new ListNode ( t%10 );
                    current = current->next;
                    carry = 0;
                } 
                //tt = l1;
                l1 = l1->next;                    
            }
            if ( carry == 1 )
            {
                    current->next = new ListNode(carry); 
            }
        }
        else
        { 
            //cout<<"kfd"<<endl;
            
            int carry = 0;
            while ( l1 )
            {
                int t = l1->val + l2->val + carry;
                if ( t>9 )
                {
                    current->next = new ListNode ( t%10 );
                    //cout<<t%10<<" ";
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->next = new ListNode ( t%10 );
                    //cout<<t%10<<" ";
                    current = current->next;
                    carry = 0;
                } 
                l1 = l1->next;
                l2 = l2->next;
            }
            while ( l2 )
            {
                int t = l2->val + carry;
                if ( t>9 )
                {
                    current->next = new ListNode ( t%10 );
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->next = new ListNode ( t%10 );
                    current = current->next;
                    carry = 0;
                } 
                l2 = l2->next;
            }
            if ( carry == 1 )
            {
                current->next = new ListNode ( carry );
            }
        }
        return result->next;            //1st element is 0. therefore it has to be excluded
    }
};