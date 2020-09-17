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

 //was trying recursion
 //my idea of recursion was good, but was not able to implement it.
 //https://www.geeksforgeeks.org/sum-of-two-linked-lists/

 //https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists-set-3/?ref=rp
/*class Solution {
public:*/
    /*ListNode* add (ListNode* result, ListNode* l1, ListNode* l2){
        if (l1 == l2 ){                     //ie both are null
            return;
        }
        int c = 0;
        int s = l1->val + l2->val + c;
        c = ((l1->val + l2->val + c)>9 )?1:0;
        ListNode * temp = new ListNode(s);
        
        if ( result == NULL ){
            result = temp;
        }
        ListNode * t = result;
        t = t->next;
        t
        
    }*/
   /* ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        
        int n1 = 0, n2 = 0;
        
        while( curr1 && curr2 ){
            if (curr1){
                n1++;
            }
            if (curr2){
                n2++;
            }
        }
        int d = (n2>=n1)?(n2-n1) : (n1-n2);
        
        while(d--){
            if ( n2>n1 ){
                curr2 = curr2->next;
            }
            else{
                curr1 = curr1->next;
            }
        }
        
        ListNode* result = NULL;
        result = add (result, curr1, curr2);*/
        
        /*if ( l1 == NULL && l2 == NULL ){
            return;
        }
        
        if ( l1 == NULL && l2 != NULL ){
            add ( l1, l2 );
        }
        
        if ( l1 != NULL && l2 == NULL ){
            add ( l1, l2 );
        }*/
        
    /*}
};*/
    

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        
        int n1 = 0, n2 = 0;
        
        while( curr1 || curr2 ){
            if (curr1){
                n1++;
                curr1 = curr1->next;
            }
            if (curr2){
                n2++;
                curr2 = curr2->next;
            }
        }
        //cout<<n1<<" "<<n2<<endl;
        
        curr1 = l1;
        curr2 = l2;
        int d = (n2>=n1)?(n2-n1) : (n1-n2);
        //cout<<d<<endl;
        int tt = d;
        while(d--){
            if ( n2>n1 ){
                curr2 = curr2->next;
            }
            else{
                curr1 = curr1->next;
            }
        }
        d = tt;
        stack<ListNode *> s;
        ListNode * result = NULL;
        ListNode * t = result;
        
        while(curr1){
            s.push(curr1);
            s.push(curr2);
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        int c = 0;
        ListNode * curr_r = result;
        while(s.empty() == 0){
            //cout<<" akf"<<endl; 
            ListNode * p = s.top();
            s.pop();
            ListNode * pp = s.top();
            s.pop();
            int sum = p->val + pp->val + c;
            cout<<sum<<" "<<c<<endl;
            
            c = ( sum >9 )?1:0;
            ListNode * temp = new ListNode(sum%10);
            if ( result == NULL ){
                result = temp;
                curr_r = result;
                //cout<<curr_r->val<<endl;
            }
            else{
                curr_r->next = temp;
                curr_r = curr_r->next;
                //cout<<curr_r->val<<endl;
            }      
        }
        
        curr1 = l1;
        curr2 = l2;
        
        stack<ListNode *> initial;
        cout<<d<<endl;
        for ( int i = 0; i<d; i++ ){
            //cout<<" kf "<<endl;
            if (n2>n1){
                initial.push(curr2);
                curr2 = curr2->next;
            }
            if (n2<n1){
                initial.push(curr1);
                curr1 = curr1->next;
            }
        }
        
        while ( initial.empty() == 0 ){
            ListNode * p = initial.top();
            initial.pop();
            int sum = p->val + c;
            //cout<<"p = "<<p<<"Value "<<p->val<<endl;
            //cout<<sum<<" "<<c<<endl;
            c = ( sum >9 )?1:0;
            ListNode * temp = new ListNode(sum%10);
            if ( result == NULL ){
                result = temp;
                curr_r = result;
                //cout<<curr_r->val<<endl;
            }
            else{
                curr_r->next = temp;
                curr_r = curr_r->next;
                //cout<<curr_r->val<<endl;
            }      
        }
        if ( c == 1 ){
            ListNode * temp = new ListNode(c);
            curr_r->next = temp;
            curr_r = curr_r->next;
        }
        
        ListNode * prev = NULL;
        ListNode * curr = result;
        ListNode * fwd = curr->next;
        
        while(curr){
            curr->next = prev;
            prev = curr;
            curr = fwd;
            if( fwd != NULL)
                fwd = fwd->next;
        }
        
        return prev;
    }
};