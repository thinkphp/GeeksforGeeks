#include<stdio.h>
#include<string.h>

int main() {

    int i,
        j,
        n,
        k, 
        T;

    char str[2001], matrix[200][200]; 
    
    
    scanf("%d", &T);//read the number of test cases
    while(T--) {

          scanf("%s",str);//read the string from console
          n = strlen(str);//get the length of the string

          k = 0;

          j = 0;
  
          //loop through each character
          for(i = 0; i < n; i++) {

              if(str[i] == '.') {

                 matrix[j][k] = '\0';

                 j++;

                 k = 0;

              } else {

                 matrix[j][k++] = str[i];    
              }
          }    

          matrix[j][k] = '\0';

          for(;j>0;j--) printf("%s.",matrix[j]);

                   printf("%s",matrix[j]);
                   
          printf("\n");
    } 

return (0);
}