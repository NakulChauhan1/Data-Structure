// https://leetcode.com/problems/symmetric-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// https://www.geeksforgeeks.org/symmetric-tree-tree-which-is-mirror-image-of-itself/
//above solution is precise way of coding what i have done.
/*
Iterative solution
https://leetcode.com/problems/symmetric-tree/solution/
*/

class Solution {
public:
    bool check ( TreeNode* l_root, TreeNode* r_root )
    {
        if ( l_root == NULL && r_root == NULL )
            return 1;
        
        if ( l_root == NULL )
            return 0;
        
        if ( r_root == NULL )
            return 0;
        
        bool flag;
        if ( l_root->val == r_root->val )
        {
            flag = check ( l_root->left, r_root->right );
            if ( flag == 0 )
                return 0;
            flag = check ( l_root->right, r_root->left );
        }
        else
            return 0;
        return flag;
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if ( root == NULL )
            return 1;
        
        TreeNode* left_sub = root->left;
        TreeNode* right_sub = root->right;
        
        return check ( left_sub, right_sub );



       //here was trying inoder traveral and then checking but then its not a symmetric. Symmetric is also mirror image.  
        /*vector<int> left_sub;
        vector<int> right_sub;
        
        TreeNode* ptr = root->left;
        stack<TreeNode*> s;
        
        while ( ptr != NULL || s.empty() != 1 )
        {
            while (ptr)
            {
                s.push(ptr);
                ptr = ptr->left;
            }
            ptr = s.top();
            s.pop();
            left_sub.push_back(ptr->val);
            //cout<<ptr->val<<endl;
            ptr = ptr->right;
        }
        
        
        ptr = root->right;
        while ( ptr != NULL || s.empty() != 1 )
        {
            while (ptr)
            {
                s.push(ptr);
                ptr = ptr->right;
            }
            ptr = s.top();
            s.pop();
            right_sub.push_back(ptr->val);
            ptr = ptr->left;
        }
        
        int i;
        if ( left_sub.size() != right_sub.size() )
            return 0;
        
        for ( i = 0;i <right_sub.size(); i++ )
        {
            //cout<<left_sub[i]<<" "<<right_sub[i]<<endl;
            if ( left_sub[i] != right_sub[i] )
                break;
        }
        
        return (i == right_sub.size())?1:0;*/
        
    }
};