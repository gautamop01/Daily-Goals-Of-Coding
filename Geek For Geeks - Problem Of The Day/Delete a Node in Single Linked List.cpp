Node* deleteNode(Node *head, int x)
{
    if (x == 1) return head->next; // If x is 1, delete the first node and return the new head.
    
    auto cur = head; // Create a pointer 'cur' to traverse the linked list.
    
    while (--x > 1) // Decrement x and traverse the list until x becomes 1 less than the desired node position.
        cur = cur->next;
    
    cur->next = cur->next->next; // Update the 'next' pointer of the previous node to skip the node to be deleted.
    
    return head; // Return the head of the modified linked list.
}
