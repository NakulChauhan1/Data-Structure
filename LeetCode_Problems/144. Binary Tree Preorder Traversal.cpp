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

//https://www.geeksforgeeks.org/iterative-preorder-traversal/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if ( root == NULL )
            return vector<int>();
        vector<int> result;
        TreeNode * curr = root;
        stack <TreeNode *> s;
        s.push(root);
        /*while( curr || s.empty() == 0 ){
            if ( curr == NULL ){
                curr = s.top();
                s.pop();
            }
            result.push_back(curr->val);
            if ( curr->right != NULL )
                s.push(curr->right);
            curr = curr->left;
        }
        return result;*/
        while( s.empty() == 0 ){
            curr = s.top();
            cout<<curr->val<<endl;
            s.pop();
            result.push_back(curr->val);
            if ( curr->right != NULL )
                s.push(curr->right);
            if ( curr->left != NULL )
                s.push(curr->left);
            
        }
        return result;
    }
};