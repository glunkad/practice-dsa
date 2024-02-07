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
    // level order traversal or bfs
    void helper(TreeNode* root, vector<double>& v){
        if(root == NULL){
            return ;
        }
        
        queue<TreeNode* > q;
        
        q.push(root);
        
        while(!q.empty()){
            double sum = 0;
            int sz = q.size();
            
            for(int i = 0; i < sz; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                sum += curr->val;
            }
            v.push_back(sum / sz);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        helper(root, v);
        return v;
    }
};