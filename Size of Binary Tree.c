/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
   if(node == NULL) return 0;
   else return getSize(node->left) + 1 + getSize(node->right);
}