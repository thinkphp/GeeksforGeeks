//Structure of binary tree
/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/

#include <queue>

class Qnode{
     public:
     int level;
     Node *node;
         Qnode(Node* n, int l = 0):node(n),level(l){}
         Node* getNode(){
             return node;
         }
         int Level(){
             return level;
         }
};
// function should print the topView of the binary tree
void topView(struct Node *root)
{
      // Your code here
    int low = 1;
    int high = 0;
    
    std::queue<Qnode> myQ;
    myQ.push(Qnode(root));
    
    while(!myQ.empty())
    {
        Qnode fr = myQ.front();
        myQ.pop();
        if(fr.Level() < low)
        {
            cout<<fr.getNode()->data<<" ";
            low = fr.Level();
        }
        if(fr.Level() > high)
        {
            cout<<fr.getNode()->data<<" ";
            high = fr.Level();
        }
        if(fr.getNode()->left)
        {
            myQ.push(Qnode(fr.getNode()->left, fr.Level() - 1));
        }
        if(fr.getNode()->right)
        {
            myQ.push(Qnode(fr.getNode()->right, fr.Level() + 1));
        }
    }
}