/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

vector<int> vec;


void orderGo(Node *root) {
     if(root!=NULL) {
        vec.push_back(root->data);
        orderGo(root->left);
        orderGo(root->right);
     }
}

void inorder(Node*root){
    if(root->left) inorder(root->left);
    root->data = vec[0];
    vec.erase(vec.begin());
    if(root->right) inorder(root->right);
}

/*Your code here*/
Node *binaryTreeToBST (Node *root)
{
    orderGo(root);
    sort(vec.begin(), vec.end());
    inorder(root);
   return root;
}