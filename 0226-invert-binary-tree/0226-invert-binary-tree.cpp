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
    void helper(TreeNode* root){
        if(root == NULL){
            return ;
        }
        // tmp node to which will be used to swap nodes
        TreeNode* tmp;
        
        // swap algo 
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        
        // traverse the tree
        helper(root->left);
        helper(root->right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};