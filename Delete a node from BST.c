/* The structure of a BST Node is as follows:
struct Node {
  int data;
  Node * right, 
       * left;
}; */

Node *findMin(Node *root) {
    
     while(root->left != NULL) {
         
           root = root->left;
     }
     return root;
}

Node *deleteNode(struct Node *root,  int data)
{
       if(root == NULL) return root;
       
       else if( data < root->data ) {
           
            root->left = deleteNode(root->left, data); 
            
       } else if(data > root->data) {
           
            root->right = deleteNode(root->right, data);
            
       //case 1: no child                
       } else if(root->left == NULL && root->right == NULL ) {
        
                 delete root;
                 root = NULL; 
                 
       //case 2: one child             
       } else if( root->left == NULL ) {
           
           struct Node* temp;
           
                 temp = root;
                 root = root->right;
                 
                 delete temp;
           
       } else if( root->right == NULL ) {
           
         struct Node* temp;
         
                temp = root;
                root = root->left;
                
                delete temp;
           
       //case 3: two children            
       } else {
        
              struct Node* temp;
                           temp = findMin( root->right );
                           root->data = temp->data;
                           root->right = deleteNode(root->right, temp->data); 
       }
       
       return root;
}