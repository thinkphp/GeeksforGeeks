#include <iostream>

using namespace std;

struct node 
{
    int data;
    struct node *left,
                *right;
};

struct node* createNewNode(int data){
    
       struct node* temp = new struct node;
             temp->data = data;
             temp->left = NULL;
             temp->right = NULL;
             
             return temp;
};


struct node* create_binary_tree(int arr[],int lo, int hi){
    
      if(lo > hi) return NULL;
      
      int middle;
          middle = (lo+hi)/2;
       
      struct node *root = createNewNode(arr[middle]);
            root->left = create_binary_tree(arr,lo,middle-1);
            root->right = create_binary_tree(arr,middle+1,hi);
            
            return root;
};

void preorder(struct node *root) {
    
        if(root == NULL) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
     
}


int main() {
    
    int T;
    cin>>T;
    
    while(T--)
    {
        int i;
        int n;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        struct node* root = create_binary_tree(arr, 0, n-1);
        preorder(root);
        cout<<endl; 
        
    }
    return(0);
}