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
private: int ans = 0;
public:
    // preorder root-left-right traversal
    void helper(TreeNode* root, int tmp){
        if(root == NULL){
            return;
        }
        
        tmp = tmp*2+root->val; // to get decimal value
        
        // Base condition for recurssion 
        if(root->left == NULL && root->right == NULL){
            ans += tmp;
            return ;
        }
        
        helper(root->left, tmp);
        helper(root->right,tmp);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        helper(root,0);
        return ans;
    }
};