/*
The structure of Link list node is as follows 
struct node
{
    int data;
    struct node* next;
};

The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

TreeNode* createNewNode(int val) {
    TreeNode* newnode = new TreeNode;
              newnode->data = val;
              newnode->left = newnode->right = NULL;
              
    return newnode;              
}

/*You are required to complete this method*/
void convert(node *head,TreeNode * &root)
{ 
     queue<TreeNode *> Q;  
     root = createNewNode(head->data);
     head = head->next;
     Q.push(root);
     
     while(!Q.empty()) {
            TreeNode *aux = Q.front();
            Q.pop();
            if(head) {
                aux->left = createNewNode(head->data);
                Q.push(aux->left);
                head = head->next;
            }
            if(head) {
                aux->right = createNewNode(head->data);
                Q.push(aux->right);
                head = head->next;
            }
     }
}