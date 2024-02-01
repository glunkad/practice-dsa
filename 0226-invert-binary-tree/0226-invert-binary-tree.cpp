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
    void helper1(TreeNode* root){
        if(root == NULL){
            return ;
        }
        // swap algo
        // tmp node to which will be used to swap nodes
        // TreeNode* tmp; 
        // tmp = root->left;
        // root->left = root->right;
        // root->right = tmp;
        swap(root->left,root->right);
        
        // traverse the tree
        helper1(root->left);
        helper1(root->right);
        
    }
    void helper2(TreeNode* root){
        if(root == NULL){
            return ;
        }
        
        stack<TreeNode*> st;
        // push all the tree in stack
        st.push(root);
        
        while(!st.empty()){
            TreeNode* curr = st.top();
            st.pop();
            
            if(curr == NULL){
                continue;
            }
            
            helper2(root->left);
            helper2(root->right);
            swap(root->left, root->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        helper2(root);
        return root;
    }
};