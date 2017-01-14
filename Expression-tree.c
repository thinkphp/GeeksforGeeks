/*The structure of node is as follows
struct node{
	string data;
	node *left;
	node *right;
};
*/

/*You are required to complete below method */
int evalTree(node* root)
{
     if (root == NULL) {
        return 0;
    }
    if (!root->left && !root->right) {
        return (stoi(root->data));
    }
    int l = evalTree(root->left);
    int r = evalTree(root->right);
    if (root->data == "+") {
        return l+r;
    }
    if (root->data == "*") {
        return l*r;
    }
    if (root->data == "-") {
        return l-r;
    }
    return (int)(l/r);
}
