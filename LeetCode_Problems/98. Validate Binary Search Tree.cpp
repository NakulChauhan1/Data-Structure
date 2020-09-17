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


bool isValid (TreeNode* curr, long int min, long int max )
{
    if ( curr == NULL )
        return 1;
    
    
    if ( curr->val >= max || curr->val <= min )
    {
        return 0;
    }
    
    if (curr->right == NULL && curr->left == NULL) 
    {
       return 1; 
    }
    
return (isValid ( curr->left, min, curr->val ) && isValid ( curr->right, curr->val, max ));
}

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long int min = -21474836470, max = 21474836470;
        
        TreeNode* curr = root;
        if ( isValid(curr, min, max) )
            return 1;
        else
            return 0;
    }
};

//can be done iteratively