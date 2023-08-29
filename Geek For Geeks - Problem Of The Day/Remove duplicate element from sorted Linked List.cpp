/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if(!head || !head->next){
        return head;
    }
    
    Node* current = head;
    
    while(current->next){
        if(current->data == current->next->data){
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else{
            current = current->next;
        }
    }
    return head;
}
