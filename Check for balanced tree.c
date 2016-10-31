

/* A binary tree node structure
struct Node {
    int data;
    Node* left, * right;
}; */

// This function should return tree if passed  tree 
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree

int height(Node* node)
{
  
   if(node == NULL)
       return 0;
 
    return 1 + max(height(node->left), height(node->right));
};

int max(int a, int b)
{
  return (a >= b)? a: b;
};    

bool isBalanced(Node *root)
{
  
  int lh,
      rh;
 
   
   if(root == NULL)
    return 1; 
 
   /* Get the height of left and right sub trees */
   lh = height(root->left);
   rh = height(root->right);
 
   if( abs(lh-rh) <= 1 ) return 1;
 
   /* If we reach here then tree is not height-balanced */
   return 0;  
}
