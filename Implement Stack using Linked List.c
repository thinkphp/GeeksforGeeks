/* 
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
};

and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void Stack :: push(int x)
{
        StackNode *newNode = new StackNode;
        newNode->data = x;
        newNode->next = NULL;
        if(top == NULL) {
           top = newNode;        
        } else {
           newNode->next = top;
           top = newNode;
        }
}

/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
        if(top == NULL) return -1;
        
        else {
             StackNode *temp = top;
                        top = top->next;
                        int data = temp->data;
                        free(temp);
                        return data;
        }
}

