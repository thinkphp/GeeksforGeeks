 struct Node * ptr=node;
   if(ptr==NULL)
   return 0;
   else
   {
   int lheight=height(ptr->left);
   int rheight=height(ptr->right);
   if(lheight>rheight)
   return (lheight+1);
   else
   return (rheight +1);
   }
   