Node* LCA(Node *root, int n1, int n2)
{
    if(root) {
        if(root->data == n1 || root->data == n2) {
            // found lca
            return root;
        }
        Node *l = NULL, *r = NULL;
        if(n1 < root->data || n2 < root->data) {
            l = LCA(root->left, n1, n2);
        }
        if(n1 > root->data || n2 > root->data) {
            r = LCA(root->right, n1, n2);
        }
        if(r && l) {
            // I'm the LCA
            return root;
        }
        else if(l) {
            return l;
        }
        else 
            return r;
    }
    return NULL;
}