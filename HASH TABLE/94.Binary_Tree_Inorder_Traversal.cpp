/*
Given a binary tree, return the inorder traversal of its nodes' values.

Example:

Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,3,2]

Follow up: Recursive solution is trivial, could you do it iteratively?
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* curr = root;
        stack<TreeNode*> stk;
        
        while(curr!=NULL || stk.empty()==false){
            while(curr!=NULL){
                stk.push(curr);
                curr = curr->left;
            }    
            
            curr = stk.top();
            stk.pop();
            res.push_back(curr->val);
            
            curr = curr->right;
            
        }
        
        return res;
    }
};
