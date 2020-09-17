//https://leetcode.com/problems/find-mode-in-binary-search-tree/

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


//can we done with no extra space
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        
        vector<int> mode;
        vector<int> sorted;
        if ( root == NULL )
            return sorted;
        
        if ( root->left == NULL && root->right == NULL )
        {
            mode.push_back(root->val);
            return mode;
        }
        stack<TreeNode *> s;
        TreeNode* curr = root;
        while ( curr != NULL || s.empty() != 1 )
        {
            while ( curr )
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            sorted.push_back(curr->val);
            
            curr = curr->right;   
        }
        
    
        int freq = 1;
        int t = 1;
        
        int i;
        for ( i = 1; i<sorted.size(); i++ )
        {
            if ( sorted[i] == sorted [i-1])
            {
                //cout<<sorted[i]<<endl;
                
                t ++;
                continue;
            }
            if ( t > freq )
            {
                mode.resize(0);
                freq = t;
                mode.push_back( sorted[i-1] );
                //cout<<sorted[i-1]<<endl;
            }
            else if ( t == freq )
                mode.push_back( sorted[i-1] );
                
            t = 1;
        }
        if ( t > freq )
            {
                mode.resize(0);
                freq = t;
                mode.push_back( sorted[i-1] );
               // cout<<sorted[i-1]<<endl;
            }
        else if ( t == freq )
                mode.push_back( sorted[i-1] );
        
        if ( freq == 1 )
        {
            return sorted;
        }
        return mode;
        
    }
};

//using stack only, can be done using recursion, by remembering prev_val and passing it as arguement
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        
        vector<int> mode;
        if ( root == NULL )
            return new vector<int>();
        
        if ( root->left == NULL && root->right == NULL )
        {
            mode.push_back(root->val);
            return mode;
        }
        stack<TreeNode *> s;
        TreeNode* curr = root;
        
        int freq = 1;
        int t = 1;
        
        int prev_Val = INT_MIN;
        
        while ( curr != NULL || s.empty() != 1 )
        {
            while ( curr )
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            
            if ( prev_Val == curr->val )
                t++;                                //keep on counting
            else
                t = 1;                              //fresh count
            prev_Val = curr->val;
            
            if ( t == 1 && freq == 1 )
            {
                mode.push_back(curr->val);
            }
            if ( t > freq )
            {
                mode.clear(0);
                freq = t;
                mode.push_back(curr->val);
            }
            else if ( t == freq & t != 1 )
            {
                mode.push_back(curr->val);
            }
            curr = curr->right;   
        }
        
        return mode;
          }
};