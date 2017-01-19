/*You are required to complete below method */
int maxDiff(Node *root, int k)
{
    int min_diff = root->data;

    while(root)
    {
        if(abs(k-(root->data))<(abs(min_diff-k)))
        {
            min_diff=root->data;
        }
        
        if(k>root->data) {
        
           root=root->right;
        }   
        
        else if(k<root->data){
            
                root=root->left;
        }        
        else
        
        break;
    }
    return min_diff;
}