/* 
The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; 
*/

/*Your method shouldn't print anything
 it should transform the passed linked list */
void sortList(Node** head)
{
    
     struct Node *ptr = (*head), *start = NULL;
     int arr[10000], index = 0, i, j, n = 0;

     while(ptr) {

           arr[index++] = ptr->data;
           ptr = ptr->next;
           n++;
     }

         for(i = 0; i < n - 1; i++) 

         for(j = 0; j < n - i - 1; j++)
          
             if(arr[j] > arr[j+1]) {

                  int temp = arr[j];

                      arr[j] = arr[j+1];

                      arr[j+1] = temp;  
             }

         struct Node *nextnode;

         for(index = 0; index < n; index++){

                  struct Node *gnode = (struct Node*)malloc(sizeof(struct Node));
                         gnode->data = arr[index];
                         gnode->next = NULL;    
 
             if(start == NULL) {

                start = gnode; 
                nextnode = gnode;

             }  else {

                nextnode->next = gnode;
                nextnode = gnode;
             }
                
         }

   
        *head = start;   

}