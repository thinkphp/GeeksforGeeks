#include <vector>

vector<int> v;

void send(Node *node) {
    
     if(node != NULL) {
        send(node->left);
        v.push_back(node->data);
        send(node->right);    
     }
}

bool isBST(Node* root) {
    
     int temp, n;
     
     send(root);
     
     n = v.size();  
     
     if(n == 0 || n == 1) return true;
     
     temp = v[0];
     for(int i = 1; i < n; i++) {
         if(temp > v[i]) {
            v.clear();
            return false; 
         }
         temp = v[i];
     }
     v.clear();
     return true;
}