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
    vector<vector<int>> res;
    void dfs(TreeNode* root, int target, vector<int> v){
        if(root == nullptr){
            return ;
        }
        v.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr){
            if(root->val == target){
                res.push_back(v);
                return ;
            }
        }
        
        dfs(root->left, target - root->val, v);
        dfs(root->right, target - root->val, v);
        v.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        dfs(root,targetSum,v);
        return res;
    }
};