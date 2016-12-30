/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/

Node *reverse(Node *head) {
      Node *curr = head,
           *prev = NULL,
           *next; 
           
      while(curr) {
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;    
      }    
      return prev;
}

Node *compute(Node *head) {

head=reverse(head);

Node*head2=(Node*)malloc(sizeof(Node));
     head2->data=head->data;
     head2->next=NULL;
     head=head->next;
     
while(head) {
    
    if(head->data>=head2->data) {
        
    Node*temp=(Node*)malloc(sizeof(Node));
         temp->data=head->data;
         temp->next=head2;
         head2=temp;
    }
    head=head->next;
}
return head2;
}