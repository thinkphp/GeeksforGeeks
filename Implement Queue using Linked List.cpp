/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};


and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};

 */

/* The method push to push element into the queue*/
void Queue:: push(int x)
{
     QueueNode* newNode = new QueueNode;
                newNode->data = x;
                newNode->next = NULL;
                
     if(front == NULL) {
         
        front = rear = newNode; 
        
     } else {
         
         rear->next = newNode;
         rear = newNode;
     }
}

/*The method pop which return the element poped out of the queue*/
int Queue :: pop()

{   int d = -1;

    if(front) {
       QueueNode* temp = front;
                  front = front->next;
                  d = temp->data;
    } 
    return d;
}