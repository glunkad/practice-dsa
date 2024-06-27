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
    int dfs(TreeNode* root,int& totalTilt){
        if(root == nullptr){
            return 0;
        }
        int left = dfs(root->left, totalTilt);
        int right = dfs(root->right, totalTilt);
        totalTilt += abs(left - right);
        return left+right+root->val;
    }
    int findTilt(TreeNode* root) {
        int totalTilt = 0;
        dfs(root, totalTilt);
        return totalTilt;
    }
};