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
    void dfs(TreeNode* root, vector<int>& v, int lvl){
        if(root == nullptr){
            return ;
        }
        if(lvl == v.size()){
            v.push_back(root->val);
        }
        dfs(root->right,v,lvl+1);
        dfs(root->left,v,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        int lvl = 0;
        dfs(root,v,lvl);
        return v;
    }
};