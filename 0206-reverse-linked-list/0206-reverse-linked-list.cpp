/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* helper(ListNode* pre, ListNode* root){
        // pre node acts as a previous node
        if(root == nullptr){
            return pre;
        }
        //  swap the nodes
        ListNode* t = root->next; 
        root->next = pre;
        
        return helper(root,t);
        
    }
    ListNode* reverseList(ListNode* head) {
        return helper(NULL, head);
    }
};