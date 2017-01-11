/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/
/*You are required to complete below method*/
Node* deleteAllOccurances(Node *head, int x)
{
    Node *node = head;
    
    while(node->next != NULL) {
        
         if(node->next->data == x) {
             
             node->next = node->next->next;
             
         } else {
             
            node = node->next; 
         }
    }
    
    if(head->data == x) {
        
       head = head->next;            
    }
    
    return head;
}