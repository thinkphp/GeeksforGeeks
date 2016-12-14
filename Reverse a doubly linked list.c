/* a Node of the doubly linked list */
/*struct Node
{
  int data;
  Node *next;
  Node *prev;    
};*/
void reverse(Node **head_ref)
{
  // Your code goes here
  Node *curr = *head_ref;
  Node *tmp;
  
  while(curr != NULL){
      tmp = curr->prev;
      curr->prev = curr->next;
      curr->next = tmp;
      curr = curr->prev;
  }
  if(tmp != NULL)
    *head_ref = tmp->prev;
}