/* Should convert tree to its mirror */
void mirror(Node* root) {
    
     if(root == NULL) return;
     
     queue<Node*> aQueue;
     
     aQueue.push(root);
     
     int count = 0;
     
     while(!aQueue.empty()){
         
         count = aQueue.size();
         
         while(count>0) {
             //get front
             Node *NODE = aQueue.front();
             //pop queue
             aQueue.pop();
             Node *tmp = NODE->left;
                   NODE->left = NODE->right;
                   NODE->right = tmp;
                   
             if(NODE->left!=NULL) aQueue.push(NODE->left);       
             
             if(NODE->right!=NULL) aQueue.push(NODE->right);
             count--;
         }
     }
}