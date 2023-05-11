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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        ListNode* next_next;
        if(current == NULL)
        return NULL;

        while(current-> next != NULL){
            if(current->val == current->next->val){
                next_next = current->next->next;
                delete(current->next);
                current->next = next_next;
            } 
            else{
                current = current->next;
            }
        }
        return head;
    }
};
