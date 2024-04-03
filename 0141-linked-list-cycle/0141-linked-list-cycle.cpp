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
    bool hasCycle(ListNode *head) {
//         using hashmap
//         unordered_map<ListNode* , int> mp;
        
//         while(head){
//             if(mp[head] == 1){
//                 return true;
//             }
//             mp[head]++;
//             head = head->next;
//         }
        
//         return false;
//         using floyd cycle algorithm
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                return true;
            }
        }
        
        return false;
    }
};