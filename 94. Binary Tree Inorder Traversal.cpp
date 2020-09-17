//https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    vector<int> inorderTraversal(TreeNode* root) {
    
        vector<int> result;
        
        if ( root == NULL )
            return result;
        /*if ( root->left == NULL && root->right == NULL )
        {
            result.push_back(root->val);
            return result;
        }*/
        
        stack<TreeNode *> s;
        //s.push(root);
        
        TreeNode *curr = root; 
  
    while (curr != NULL || s.empty() != 1 )
    { 
        while (curr !=  NULL) 
        { 
            s.push(curr);
            /*cout<<curr->val<<endl;
            cout<<"size: "<<s.size()<<endl;*/
            curr = curr->left; 
        } 
        curr = s.top(); 
        /*cout<<curr->val<<endl;
        cout<<"size: "<<s.size()<<endl;*/
        s.pop();
    
        result.push_back(curr->val);
        curr = curr->right; 
    }
         return result;        
    }
};
        
        /*while( S.empty() == 0 && root != NULL )
        {
           //cout<<endl<<"Left"<<endl;
            while( root )
            {
                S.push(root);
                root = root->left;
                //cout<<endl<<"Left"<<endl;
            }
            root = S.top();
            result.push_back(root->val);
                   
            if ( root->right != NULL )
            {
                root = root->right;
                S.pop();
            }
            else                                    //i was doing this redundant code
            {
                S.pop();
                if ( S.empty() )                 //stack is empty , ie we                                                                    have reached to last node
                    break;
                root = S.top();
                result.push_back(S.top()->val);
                root = root->right;
                if ( root == NULL )
                    break;
                S.pop();
            }
        }
       /* return result;        
    }
};*/