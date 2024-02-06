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
    TreeNode* ans = new TreeNode(); // ans
    TreeNode* head = ans; // iterator for ans 
    // inorder traversal
    void helper(TreeNode* root){
        if(root == NULL){
            return;
        }
        helper(root->left);
        
        head->right = new TreeNode(root->val);
        head = head->right; // implicitly
        
        helper(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        return ans->right;
    }
};