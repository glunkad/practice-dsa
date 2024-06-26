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
    int bfs(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        
        int maxSum = -100001,ans = 0, level = 0;
        
        while(!q.empty()){
            level++;
            int sum = 0;
            
            for(int i = q.size(); i > 0 ; i--){
                TreeNode* curr = q.front();
                sum += curr->val;
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(maxSum < sum){
                ans = level;
                maxSum = sum;
            }
            
        }
        return ans;
    }
    int maxLevelSum(TreeNode* root) {
        return bfs(root);
    }
};