#include <stdio.h>
#include <malloc.h>

struct Node {
    int data;
    struct Node *left,
                *right; 
};

struct Node *newNode(int data) {
    
       struct Node *temp =(struct Node*) malloc(sizeof(struct Node));
                    temp->data = data;
                    temp->left = NULL;
                    temp->right = NULL;

        return temp;                    
};

struct Node* insert_tree(struct Node* root,int data) {
    
       if(root == NULL) return newNode(data);
       
       else if(data < root->data) {
           
            root->left = insert_tree(root->left,data);
           
       } else if(data > root->data) {
           
            root->right = insert_tree(root->right,data);
       }
           
    return root;     
};

void preorder(struct Node*node){
    
     if(node!=NULL) {
         preorder(node->left);
         if(node->left == NULL && node->right == NULL)
              printf("%d ", node->data);
         preorder(node->right);
     }    
}

int main()
{
    int T,
        elem,r,
        i,
        n; 
        

    scanf("%d",&T);

    while(T--) {
    
          scanf("%d",&n);
          
          scanf("%d",&r);
          
          
          struct Node * root = NULL;
          
          root = insert_tree(root,r);
          
          for(i = 0; i < n - 1; i++) {
              
             scanf("%d", &elem);
             
             root = insert_tree(root, elem);
          }
          
          preorder(root);
          
          printf("\n");
    }

	return 0;
}