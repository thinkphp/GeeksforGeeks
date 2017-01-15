/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node *random;
};
*/

/* The function should clone the passed tree and return 
   root of the cloned tree */
Node* cloneTree(Node* tree)
{
   Node* _cloneTree;
   
   if(tree) {
       
       _cloneTree = (Node*)malloc(sizeof(Node));
       _cloneTree->data = tree->data;
       _cloneTree->random = tree->random;
       _cloneTree->left = cloneTree(tree->left);
       _cloneTree->right = cloneTree(tree->right);
       
       return _cloneTree;
       
   } else {
       
     return NULL;  
   }
}