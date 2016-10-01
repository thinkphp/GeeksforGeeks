#include <stdio.h>
int main() {

    int i,T,x,y;
    char path[201],dir, move;

    scanf("%d", &T);        

    while(T--) {
 
      scanf("%s", path);

      //firstly the robot faces north
      dir = 'N';

      x = y = 0;      

      for(i = 0; path[i]!='\0'; i++) {

          move = path[i];

         //turn left
         if(move == 'L') {
 
           switch(dir) {

                  case 'N': dir = 'W';break;
                  case 'S': dir = 'E';break;
                  case 'W': dir = 'S';break;
                  case 'E': dir = 'N';break;
           }     
     
         //turn right
         } else if(move == 'R') {

           switch(dir) {

                  case 'N': dir = 'E';break;
                  case 'S': dir = 'W';break;
                  case 'W': dir = 'N';break;
                  case 'E': dir = 'S';break;
           }     

         //go one unit
         } else {

           switch(dir) {

                  case 'N': y += 1;break;
                  case 'S': y -= 1;break;
                  case 'W': x -= 1;break;
                  case 'E': x += 1;break;
           } 
         }   

      }

         if(x == 0 && y == 0) {
            printf("Circular");
         }  else {
            printf("Not Circular");
         }


      printf("\n");
    }

     

return(0);
}