/* Node structure 
struct node {
    int data;
   struct node * right, * left;
};*/


/*You are required to complete this method*/
bool search(node* root, int x)
{
     if(root == NULL) return false;
     else if(x == root->data) return true;
     else if(root->data == x) return true;
     else if(x < root->data) return search(root->left, x);
     else if(x > root->data) return search(root->right,x);
}


