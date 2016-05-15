#include <stdio.h>
#include <string.h>

int check(char *str) {

    int i, n = strlen(str), oddDigitSum = 0, evenDigitSum = 0;

    for(i = 0; i < n; ++i) {

        //when is even , position of digit is odd
        if(i % 2 == 0) {

           oddDigitSum += (str[i] - '0');
 
        } else {

           evenDigitSum += (str[i] - '0');
        } 
    }     

    return ((oddDigitSum - evenDigitSum) % 11 == 0);
}

int main(void)
{
    char str[10000];

    int T;

    scanf("%d", &T);

    while(T--) {

         scanf("%s", str);

         check(str) ? printf("1\n") : printf("0\n");
    }

}