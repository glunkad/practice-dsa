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
    ListNode* middleNode(ListNode* head) {
        //define 2 pointers namely fast and slow 
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }   
        return slow;
    }
};

// algo 
// consider slow pointer runs at x speed 
// then fast pointer runs at 2x speed 
// when the fast pointer reaches end of the linked list 
// slow will be at middle position and we return slow pointer