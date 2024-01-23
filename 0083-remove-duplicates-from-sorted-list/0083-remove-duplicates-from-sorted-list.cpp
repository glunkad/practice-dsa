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
    void helper(ListNode* root){
        while(root && root->next){
            if(root->val == root->next->val){
                root->next = root->next->next;
            }
            else{
                root = root->next;
            }
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        helper(head);
        return head;
    }
};