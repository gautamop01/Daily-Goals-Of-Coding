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
    ListNode* swapNodes(ListNode* head, int k) {
        if (!head) return head;

        ListNode *firstNode = head, *secondNode = head, *tempNode = head;
        int count = 0;

        // Traverse the list and find the kth node from the beginning
        while (count < k - 1) {
            firstNode = firstNode->next;
            count++;
        }

        // Save the kth node in a temporary node
        tempNode = firstNode;

        // Traverse the list and find the kth node from the end
        while (tempNode->next) {
            tempNode = tempNode->next;
            secondNode = secondNode->next;
        }

        // Swap the data of the kth node from the beginning and the kth node from the end
        swap(firstNode->val, secondNode->val);

        return head;
    }
};
