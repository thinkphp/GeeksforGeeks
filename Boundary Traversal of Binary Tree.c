#include <stdio.h>
#include <malloc.h>

typedef struct node {
        int data;
         struct node *left,
                     *right;
} Node;

Node* create_binary_tree(int data) {

      Node *temp = (Node*)malloc(sizeof(Node));
            temp->data = data;
            temp->left = NULL; 
            temp->right = NULL;

      return temp;
};

void inorder(Node*root) {

     if(root!=NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
     }
};

void printLeft(Node*curr) {

     if(curr->left) {
        printf("%d ", curr->data);
        printLeft(curr->left);

     } else if(curr->right){
        printf("%d ", curr->data);
        printLeft(curr->right);
     }
};

void printLeaf(Node*curr) {
    
     if(curr) {

              printLeaf(curr->left);

              printLeaf(curr->right);

              if(curr->left == NULL && curr->right == NULL) printf("%d ", curr->data);
     }
};

void printRight(Node*curr) {

     if(curr->right) {
        printRight(curr->right);
        printf("%d ", curr->data);

     } else if(curr->left){
        printRight(curr->left);
        printf("%d ", curr->data);
     }

};



void printBoundary(Node*root) {

     if(root){

       //print left boudary
       printf("%d ", root->data);

       //print Leaves
       if(root->left) printLeft(root->left);

       printLeaf(root);

       //print right boundary
       if(root->right) printRight(root->right);

     }  

};

int main() {

    Node* root = create_binary_tree(20);  
          root->left = create_binary_tree(8);
          root->right = create_binary_tree(22);
          root->left->left = create_binary_tree(4);
          root->left->right = create_binary_tree(12);
          root->left->right->left = create_binary_tree(10);
          root->left->right->right = create_binary_tree(14);
          root->right->right = create_binary_tree(25);
          
          printBoundary(root);
   
return(0);
}