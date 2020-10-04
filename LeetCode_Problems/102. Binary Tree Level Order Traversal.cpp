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

/* Used queue to find what is the number of nodes in each level using NULL as marker*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        if ( root == NULL )
            return result;
        
        queue<TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        
        vector<int> arr;
    
        TreeNode * curr = root;
        
        while( Q.empty() == 0 )
        {
            curr = Q.front();
            Q.pop();
            
            if ( curr == NULL ){
                result.push_back(arr);   
                arr.resize(0);
                if (Q.size() > 0) {
                    Q.push(NULL);
                }
            }
            else{
                arr.push_back(curr->val);
                if ( curr->left != NULL ){
                    Q.push(curr->left);
                }
            
                if ( curr->right != NULL ){
                    Q.push(curr->right);
                } 
            }
        }
        return result;
    }
};