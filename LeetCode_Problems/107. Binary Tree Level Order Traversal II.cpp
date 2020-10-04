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
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> result;
        if ( root == NULL )
            return result;
        
        queue<TreeNode*> Q;
        TreeNode* curr = root;
        Q.push(curr);
        Q.push(NULL);
        
        vector<int> temp;
        
        while( Q.empty() != 1 )
        {
            curr = Q.front();
            Q.pop();
            
            if ( curr == NULL ){
                result.push_back(temp);
                temp.resize(0);
                if ( Q.size() > 0 )
                    Q.push(NULL);
                
            }
            else{
                temp.push_back(curr->val);
                if ( curr->left )
                    Q.push(curr->left);
            
                if ( curr->right )
                    Q.push(curr->right);
            }
            
        }
        
        int n = result.size();
        for ( int i = 0; i<n/2; i++ ){
            temp = result[i];
            result[i] = result[n-i-1];
            result[n-i-1] = temp;
        }
        return result;
        
        
    }
};