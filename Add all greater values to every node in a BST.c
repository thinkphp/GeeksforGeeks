/* BST Node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/*  modifies the root of the bst */

void modifyBST(Node *root,int *sum)
{
     if(root == NULL) return;
                   
     modifyBST(root->right,sum);
     *sum = *sum + root->data;
     root->data = *sum;
     modifyBST(root->left,sum);
}   
      
    
 

void modify(Node **root)
{
     int sum = 0;
     modifyBST(*root, &sum);
}