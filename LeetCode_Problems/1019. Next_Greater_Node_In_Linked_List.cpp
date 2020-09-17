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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> a;
        /*vector<bool> flag;
        
        ListNode * ptr1 = head;
        while (ptr1)
        {
            flag[ptr1->val] = 1;
            ptr1 = ptr1->next;
        }*/
        
        ListNode * ptr1 = head;
        int i = 0;
        while (ptr1)
        {
            ListNode * ptr2 = ptr1->next;
            int j = i+1;
            while(ptr2)
            {
                if ( ptr2->val > ptr1->val )
                {
                    a.push_back(ptr2->val);
                    break;
                }
                ptr2 = ptr2->next;
            }
            if ( ptr2 == NULL)
                a.push_back(0);
            ptr1 = ptr1->next;
        }
        return a;
    }
};