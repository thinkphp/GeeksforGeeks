#include<bits/stdc++.h>

using namespace std;

struct Node {
int data;
struct Node * right, * left;
};


void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}



void inorderrrrr(Node *root)
{
    if(root!=NULL)
    {
    inorderrrrr(root->left);
    cout<<root->data<< " ";
    inorderrrrr(root->right);
    }
}



void modify(Node **root);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

        modify(&root);

        inorderrrrr(root);
        cout<<endl;

    }
}

/*  modifies the root of the bst */

void modifyUtil(Node *root, int& m) {
    if(root == NULL) return;
    
    modifyUtil(root->right, m);
    
    m += root->data;
    root->data = m;
    modifyUtil(root->left, m);
}

void modify(Node **root)
{
    int m = 0;
    modifyUtil(*root, m);
}