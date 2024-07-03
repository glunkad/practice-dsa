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
    void bfs(TreeNode* root,int& width){
        if(root == nullptr){
            return;
        }
        queue<pair<TreeNode*, unsigned long long int>> q;
        q.push({root,1});
        
        while(!q.empty()){
            auto left = q.front().second;
            auto right = left;
            int sz = q.size();
            
            while(sz > 0){
                auto [node, num] = q.front();
                q.pop();
                
                right = num;
                if(node->left != nullptr) q.push({node->left, 2*num});
                if(node->right != nullptr) q.push({node->right,2*num+1});
                
                sz--;
            }
            width = max(width, int(right - left +  1));
        }
    }
    int widthOfBinaryTree(TreeNode* root) {
        int width = 0;
        bfs(root,width);
        return width;
    }
};