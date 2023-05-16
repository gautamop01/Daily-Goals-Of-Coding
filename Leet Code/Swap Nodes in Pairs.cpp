// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return head;
//         } 

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = head->next;

//         while(curr != NULL && next != NULL){
//             curr->next = next->next;
//             next->next = curr;

//             if(prev == NULL){
//                 head = next;
//             } else{
//                 prev->next = next;
//             }

//             prev = curr;
//             curr = curr->next;
//             if(curr != NULL){
//                 next = curr->next;
//             }
//         }
//         return head;
//     }
// };

class Solution {
    public:
         ListNode* swapPairs(ListNode* head){
             if(head == NULL || head->next == NULL){
                 return head;
             } 

             ListNode* newhead = head->next;
             head->next = swapPairs(newhead->next);
             newhead->next = head;
             return newhead;


         }
};

/*
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = head->next;
        
        while (curr != NULL && next != NULL) {
            // Swapping the pair
            curr->next = next->next;
            next->next = curr;
            
            // Adjusting the pointers
            if (prev == NULL) {
                head = next;  // Updating the new head of the list
            } else {
                prev->next = next;
            }
            
            // Moving to the next pair
            prev = curr;
            curr = curr->next;
            if (curr != NULL) {
                next = curr->next;
            }
        }
        
        return head;
    }
};

*/
