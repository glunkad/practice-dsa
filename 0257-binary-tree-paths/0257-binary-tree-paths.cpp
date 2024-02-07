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
    // preorder root - left - right 
    void helper(TreeNode* root,string s, vector<string>& v) { 
        if(root == NULL){
            return ;
        }
        s += to_string(root->val);
        if(root->left == NULL && root->right==NULL){
            v.push_back(s);
            s = "";
        }
        s += "->";
        helper(root->left,s,v);
        helper(root->right,s,v);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        helper(root,"",v);
        return v;
    }
};