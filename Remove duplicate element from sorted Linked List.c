Node *removeDuplicates(Node *root)
{
   Node *p, *q, *temp;
   
  p = root;
  
  while(p != NULL && p->next != NULL) {
      
        q = p;
        
        if(p->data == q->next->data) {
            
           temp = q->next;
           q->next = q->next->next;
           delete temp;
           
        } else p = p->next;
  } 
  
  return root;
}