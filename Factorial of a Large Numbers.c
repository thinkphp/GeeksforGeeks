#include <stdio.h>
#include <malloc.h>

typedef struct Node {
       int data;
       struct Node* next;
} LinkedIn;

LinkedIn* insert(LinkedIn* head, int val) {

           LinkedIn* temp = (LinkedIn*)malloc(1*sizeof(LinkedIn)) ;
                     temp->data = val;
                     temp->next = NULL;

           if(head == NULL) {

                    head = temp;
                    return head; 
           } 

           LinkedIn *temp2 = head;

           while(temp2->next != NULL) {

                 temp2 = temp2->next;
           } 

           temp2->next = temp; 

           return head; 
};

void print(LinkedIn* head){

          while(head != NULL) {

                printf("%d", head->data);
                head = head->next;
          }
};

LinkedIn* reverse(LinkedIn* head) {
 
          LinkedIn *NEXT,
                   *CURR = head,
                   *PREV = NULL;

          while( CURR ) {
                 NEXT = CURR->next;
                 CURR->next = PREV;
                 PREV = CURR;
                 CURR = NEXT;  
          }

          head = PREV;

          return head; 
};

void factorial(int n) {

     LinkedIn *L = NULL,  
              *head = NULL;

     int i, 
         k,
         prod,
         curry = 0,
         index = 1;

     L = insert(L, 1);  
 
     head = L;
  
     for(i = 2; i <= n; ++i) {

         L = head;

         k = 0;
 
         while(k < index) {

               prod = (L->data)*i + curry; 

               L->data = prod % 10;

               curry = prod / 10;

               if(curry > 0 && L->next == NULL) {

                    L = insert(L, 0);

                    index++;
               } 

               L = L->next;

               k++;
         }  
     }

     print(reverse(head));
 
};

int main() {
    int T, N;

    scanf("%d", &T);
    while(T--){ 

         scanf("%d", &N);         
         factorial(N); 
         printf("\n");
    }

    return(0);
}