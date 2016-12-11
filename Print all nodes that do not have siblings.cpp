/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
void pr(Node* node,vector<int>&v)
{
   // Your code here
   if(node==NULL)
   return;
   if(node->left!=NULL&&node->right!=NULL)
   {
       pr(node->left,v);
       pr(node->right,v);
   }
    else if(node->left!=NULL)
   {
       v.push_back(node->left->data);
       pr(node->left,v);
   }
   else if(node->right!=NULL)
   {
       v.push_back(node->right->data);
        pr(node->right,v);
   }
}

/* Prints the nodes having no siblings.  */
void printSibling(Node* node)
{
  
   vector<int>v;
   pr(node,v);
   
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   
     
 
}