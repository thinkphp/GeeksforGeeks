/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/

// Should reverse list and return new head.
Node* reverse(Node *head)
{
      Node*curr = head,
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