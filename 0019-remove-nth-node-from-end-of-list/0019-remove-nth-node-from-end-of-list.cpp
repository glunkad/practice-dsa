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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // need to consider when head->next == null
        
        ListNode *p1 = head, *p2 = head;
        while(n > 0){
            p2 = p2->next;
            n--;
        }
        if(p2 == NULL){
            return head->next;
        }
        
        while(p2->next != NULL){
            p1 = p1->next;
            p2 = p2->next;
        }
        // we get location of node to remove;
        p1->next = p1->next->next;
        return head;
    }
};