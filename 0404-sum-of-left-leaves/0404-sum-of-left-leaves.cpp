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
    // bfs
    int helper(TreeNode* root){
        int sum = 0;
        queue<TreeNode*> q;
        
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            
            for(int i = 0; i < sz; i++){
                TreeNode* head = q.front();
                q.pop();
                
                if(head->left){
                    if(head->left->left == NULL && head->left->right == NULL) {
                        sum += head->left->val;
                    }
                    q.push(head->left);
                }
                if(head->right){
                    q.push(head->right);
                }
            }
        }
        return sum;
    }
    
    // dfs inorder
    void helper(TreeNode* root, int& sum){
        if(root == NULL){
            return ;
        }
        if(root->left){
            if(root->left->left == NULL && root->left->right == NULL){
                sum += root->left->val;
            }
        }
        helper(root->left,sum);
        helper(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return helper(root);
    }
};