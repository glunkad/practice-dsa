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
    void bfs(TreeNode* root,vector<vector<int>>& v){
        if(root == nullptr){
            return ;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        bool direction = true;
        while(!q.empty()){
            int sz = q.size();
            
            vector<int> v1(sz);
            
            for(int i = 0; i < sz; i++){
                TreeNode* curr = q.front();
                q.pop();
                
                int index = direction ? i : sz - i - 1;
                v1[index] = curr->val;
                
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
                
            }
            direction = !direction;
            v.push_back(v1);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        bfs(root,v);
        return v;
    }
};