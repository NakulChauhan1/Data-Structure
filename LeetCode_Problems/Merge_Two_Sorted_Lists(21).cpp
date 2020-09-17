/*
https://leetcode.com/problems/merge-two-sorted-lists/
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
#include<bits/stdc++.h>

/*
 Some other guys solution
 
ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) 
    {
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
         
        ListNode *head = new ListNode(-1);
        ListNode* curr = head;
        
        
        while(head1 && head2)
        {
            if(head1->val < head2->val)
            {
                curr->next = head1;
                head1 = head1->next;
            }
            
            else
            {
                curr->next = head2;
                head2 = head2->next;
            }
            
            
            curr = curr->next;
        }
        
        if(head1)                           //from here onwards remaining list is sorted
            curr->next = head1;
        
        if(head2)
            curr->next = head2;
        
         }
        
       // curr->next = nullptr;
        return head->next;
        
    }
};

*/

ListNode * insertt ( ListNode * l1, int x )
{
    ListNode * temp = new ListNode(x);
    //cout<<x<<endl;
    if ( l1 == NULL )
        return temp;
    
    ListNode * t = l1;
    while (t->next != NULL )
    {
        t = t->next;
    }
    t->next = temp;
    return l1;
}


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * t = l1;
        if ( l1 == NULL && l2 == NULL)
            return NULL;
        if ( l2 == NULL)
            return l1;
        if ( l1 == NULL )
            return l2;
        while (t->next)
        {
            t = t->next;
        }
        t->next = l2;       
        
        ListNode * ptr1 = l1;
        
        //int t = 0;
        while (ptr1)
        {
            ptr1 = ptr1->next;
            t++;
        }
        
        ptr1 = l1;
        ListNode * ptr2 = l2;
        
        /*for ( int i = 0; i<t; i++ )
            for ( int j = 0; i<t-i; i++ )
            {
                if ( i == j )
                    continue;
                if (  )
            }*/
        
        vector<int> arr;
        int smallest = l1->val;
        while(ptr1)
        {
            arr.push_back(ptr1->val);
            ptr1 = ptr1->next;
        }
        
        sort(arr.begin(), arr.end());
        
       /* for ( int i = 0; i<arr.size(); i++ )
        {
            cout<<arr[i]<<endl;
        }*/
        
        //l1 = NULL;
        ListNode * result = NULL;
        
        for ( int i = 0; i<arr.size(); i++ )
        {
            result = insertt ( result, arr[i] );
        }
            
        //while ()
        return result;
    }  
};

/* Other way without using array

#include<bits/stdc++.h>

ListNode * insertt ( ListNode * l1, int x )
{
    ListNode * temp = new ListNode(x);
    //cout<<x<<endl;
    if ( l1 == NULL )
        return temp;
    
    ListNode * t = l1;
    while (t->next != NULL )
    {
        t = t->next;
    }
    t->next = temp;
    return l1;
}




class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * result = NULL;
        
         if ( l1 == NULL && l2 == NULL)
            return NULL;
        if ( l2 == NULL)
            return l1;
        if ( l1 == NULL )
            return l2;
        
        while (l1 && l2 )
        {
            if ( l1->val < l2->val )
            {
                result = insertt ( result, l1->val );
                l1 = l1->next;
            }
            else
            {
                result = insertt ( result, l2->val );
                l2 = l2->next;
            }
        }
        if (l1 == 0)     //if l1 is empty, ie l2 is still left
        {
            while (l2)
            {
                result = insertt ( result, l2->val );
                l2 = l2->next;
            }
        }
        else if ( l2 == 0)
        {
            while (l1)
            {
                result = insertt ( result, l1->val );
                l1 = l1->next;
            }
        }
        
        return result;
    }
};

*/