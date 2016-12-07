/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
     Node *temp;
     
           temp = head;
           
           string str = "";
           
           while(temp) {
               
                 str += (temp->data + '0');
                 
                 temp = temp->next;
           }
           int half_len = str.size();
           
           for(int i = 0; i < half_len/2; i++){
               
               if(str[i] != str[half_len - i - 1]) 
               
               return 0;
               
           }
           return 1;
}