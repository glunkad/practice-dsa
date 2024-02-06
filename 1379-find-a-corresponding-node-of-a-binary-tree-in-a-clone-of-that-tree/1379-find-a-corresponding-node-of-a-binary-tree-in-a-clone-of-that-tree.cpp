/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* ans;
public:
    // in-order l-v-r
    void helper(TreeNode* o, TreeNode* c,TreeNode* target){
        if(o == NULL){
            return ;
        }
        helper(o->left,c->left,target);
        if(o == target){
            ans = c;
        }
        helper(o->right, c->right,target);
        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {    
        helper(original,cloned,target);
        return ans;
    }
};