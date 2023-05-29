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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        bool hasCycle = false;
        
        // Find meeting point of the two pointers
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }
        
        // If there's no cycle, return null
        if (!hasCycle) {
            return nullptr;
        }
        
        // Reset slow pointer to the beginning of the list
        slow = head;
        
        // Move both pointers one step at a time until they meet again
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Return the starting node of the cycle
        return slow;
    }
};
