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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            
            for(int i = 0; i < sz; i++){
                TreeNode* head = q.front();
                q.pop();
                if(head->val != root->val){
                    return false;
                }
                if(head->left) q.push(head->left);
                if(head->right) q.push(head->right);
            }
        }
        
        return true;
    }
};