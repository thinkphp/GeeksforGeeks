void serialize(Node *root,vector<int> &A)
{
    if(root!=NULL)
    {
        serialize(root->right,A);
        serialize(root->left,A);
        A.push_back(root->data);
    }
    else A.push_back(-1);
    //Your code here
}

/*this function deserializes
 the serialized vector A*/
Node * deSerialize(vector<int> &A)
{
    int value=A.back();
    A.pop_back();
    if(value==-1)
    return NULL;
    else{
    Node *temp=new Node();
    temp->data=value;
    temp->left=deSerialize(A);
    temp->right=deSerialize(A);}
   //Your code here
}