/*

https://leetcode.com/problems/add-two-numbers/

*/

/* good approach: (must watch)
https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/
*/


/*
instead of storing result in seperate linked list, we can store result in the biggest list
*/

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




/*
Alternative: Instead of dealing with all the edge cases, just convert the linked lists                    to integers, perform the addition, and convert the sum to a linked list and                  return it
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


/*class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * t = l1;
        string num1 = "NULL";
        //int i = 0;
        while (t)
        {
            num1 += t->val * pow(10,i);
            t = t->next;
            //i++;
        }
        
        t = l2;
        string num2 = "NULL";
        //i = 0;
        while (t)
        {
            num2 += t->val * pow(10,i);
            t = t->next;
            //i++;
        }
        
        string sum = num1 + num2;
        
        ListNode * result = new ListNode(0);
        ListNode * curr = result;
        if ( sum == 0 )
        {
            return new ListNode(0);
        }
        while (sum)
        {
            curr->next = new ListNode(sum%10);
            sum /= 10;
            curr = curr->next;
        }
        return result->next;
    }
};*/


/*  Efficient Algorithm

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(-1);
        ListNode *cur = res;
        int t = 0;
        while (l1 || l2)
        {
            if (l1)
            {
                t += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                t += l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(t % 10);
            t /= 10;
            cur = cur->next;
        }
        if (t)
            cur->next = new ListNode(1);
        return res->next;
        
    }
};


*/


//Storing result in biggest list (ie no extra space used ).
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
        
        /*ListNode * result = new ListNode(0); 
        ListNode * current = result;
        // (struct ListNode *)malloc(sizeof(struct ListNode));*/
        
        
        if ( n1 > n2)
        {
            //ListNode * tt = NULL;
            ListNode * current = l1;
            ListNode * r =l1;
            int carry = 0;
            ListNode * current_prev;
            while ( l2 )
            {
                if ( l2->next == NULL )
                    current_prev = l1;
                    
                int t = l1->val + l2->val + carry;
                if ( t>9 )
                {
                    current->val =  t%10;
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->val =  t%10;
                    current = current->next;
                    carry = 0;
                }
                l1 = l1->next;
                l2 = l2->next;
            }
            
            
            while ( l1 )
            {
                int t = l1->val + carry;
                if ( current->next == NULL )
                    current_prev =current;
                    
                if ( t>9 )
                {
                    current->val =  t%10;
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->val =  t%10;
                    current = current->next;
                    carry = 0;
                } 
                //tt = l1;
                l1 = l1->next;   

            }
            if ( carry == 1 )
            {
                current_prev->next =  new ListNode(carry);           //creating new node                                                                            because current ptr                                                                         has reached a to null.
            }
            return r;               //cannot return l2 because l2 has become null, therefore                                       its copy is returned
        }
        else
        {            
            int carry = 0;
            ListNode * current = l2;
            ListNode * r = l2;
            ListNode * current_prev;
            while ( l1 )
            {
                if ( l1->next == NULL )
                    current_prev = l2;
                
                int t = l1->val + l2->val + carry;
                if ( t>9 )
                {
                    current->val =  t%10;
                    //cout<<t%10<<" ";
                    current = current->next;
                    //cout<<l2->val<< " ";
                    carry = 1;
                }
                else
                {
                    current->val =  t%10;
                    //cout<<t%10<<" ";
                    current = current->next;
                    //cout<<l2->val<< " ";
                    carry = 0;
                } 
                l1 = l1->next;
                l2 = l2->next;
            }
            
            while ( l2 )
            {
                int t = l2->val + carry;
                
                if ( current->next == NULL )
                    current_prev =current;
                
                if ( t>9 )
                {
                    current->val =  t%10;
                    current = current->next;
                    carry = 1;
                }
                else
                {
                    current->val =  t%10;
                    current = current->next;
                    carry = 0;
                } 
                l2 = l2->next;
            }
            if ( carry == 1 )
            {
                current_prev->next =  new ListNode(carry);           //creating new node                                                                           because current ptr                                                                         has reached a to null.
            }
            return r;               //cannot return l2 because l2 has become null, therefore                                       its copy is returned
        }
        //return result->next;            //1st element is 0. therefore it has to be                                                    excluded
    }
};


/* Storing result in new list (ie extra space used)
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

*/