/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA; // trav pointer of headA
        ListNode *b = headB; // trav pointer of headB
        
        // any of the pointer is null => no intersection
        if(a == NULL || b == NULL){
            return NULL;
        }
        
        while(a != NULL && b != NULL && a != b ){
            a = a->next; // move to next node of headA
            b = b->next; // move to next node of headB
            
            if(a == b){ // intersection condition
                return a;
            }
            
            // any of the pointer reaches end we start from another head
            if(a == NULL) a = headB;
            if(b == NULL) b = headA;
        }
        return a;
    }
};