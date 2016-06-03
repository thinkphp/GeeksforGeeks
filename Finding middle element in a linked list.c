/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    if(!head) return -1;
    int c = 0;
    Node *middle = head;
    while( head ) {
        if(c%2 != 0) middle = middle->next;
        c++;
        head = head->next;
    }
    return middle->data;
}