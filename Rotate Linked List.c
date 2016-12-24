void rotate(struct node **head_ref, int k)
{ 
    struct node *temp,*last;
    temp=*head_ref;
    while(temp){
        last=temp;
        temp=temp->next;
    }
    temp=*head_ref;
    while(k--){
        last->next=temp;
        last=temp;
        temp=temp->next;
        last->next=NULL;
    }
    *head_ref=temp;
}