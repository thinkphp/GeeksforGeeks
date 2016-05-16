#include<stdio.h>
#include<string.h>

char str[10000];//input string
int T, //test cases
    n,//length of the string
    num;

int main() {

    scanf("%d", &T);

    n = strlen(str);

    while(T--) {

          scanf("%s", str);

          n = strlen(str);

          if(n == 1) {

             num = str[0];


             if(num % 4) printf("%d", 1);

                 else 
                         printf("%d", 0);         

          } else {

            num = (str[n-2]-'0') * 10; 

            num += 1 * str[n-1] + 0;

            if(num % 4 == 0) printf("%d", 1);

                    else 
                             printf("%d", 0);
          }          

          printf("\n");
    }

return(0);
}