Node* SortedMerge(Node* head1,   Node* head2)
{
 
      if(head1 == NULL) {
         return head2;
      }   
      if(head2 == NULL) {
         return head1;  
      }
      Node *merged = NULL;
      
      if(head1->data < head2->data) {
          
            merged = head1;
            merged->next = SortedMerge(head1->next, head2);
            
      } else {

            merged = head2;
            merged->next = SortedMerge(head2->next, head1);
                      
      }
      return merged;
}