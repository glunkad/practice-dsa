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
    // inorder traversal left-root-right
    void helper(TreeNode* root, vector<int>& v){
        if(root == NULL){
            return ;
        }
        
        if(root->left == NULL || root->right == NULL){
            v.push_back(-1);
        }
        
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1, v2;
        helper(p,v1);
        helper(q,v2);
        
        return v1 == v2;
    }
};