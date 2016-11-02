/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

int sum(Node* root) {
    if(root == NULL) return 0;
    return sum(root->left) + root->data + sum(root->right);
}

// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
     int left, right;
     if(root == NULL) return true;
     if(root->left == NULL && root->right == NULL) return true;
     
     left = sum(root->left);
     right = sum(root->right);
     
     if(isSumTree(root->left) && isSumTree(root->right) && root->data == left + right) return true;
     // Your code here
}