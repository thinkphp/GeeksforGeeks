#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for dynamic allocation functions

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

void* scan_line(char *line) {
    int index;
    int ch; //as getchar() returns `int`

    if( (line = (char*)malloc(sizeof(char))) == NULL) //allocating memory
    {
        //checking if allocation was successful or not
        printf("unsuccessful allocation");
        exit(1);
    }

    line[0]='\0';

    for(index = 0; ( (ch = getchar())!='\n' ) && (ch != EOF) ; index++)
    {
        if( (line = (char*)realloc(line, (index + 2)*sizeof(char))) == NULL )
        {
            //checking if reallocation was successful or not
            printf("unsuccessful reallocation");
            break;
        }

        line[index] = (char) ch; //type casting `int` to `char`
        line[index + 1] = '\0'; //inserting null character at the end
    }

    return line;
}  


int main(void)
{
    char *str = NULL, *tstr;

    char T;

    T = atoi((char*)scan_line(tstr));

    while(T--) {

         str = (char*)scan_line(str);

         check(str) ? printf("1\n") : printf("0\n");
 
         free(str); //don't forget to free the malloc'd pointer
    }

}