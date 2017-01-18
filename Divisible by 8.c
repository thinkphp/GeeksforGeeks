#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int perm(char *p, int l, int r) {

     int i;

     if(l == r) {

        int num = atoi(p);
       
        if(num % 8 == 0) return 1;

                 else 
                         return 0;          

     } else {

       for(i = l; i <= r; ++i) {

           swap((p+l),(p+i));
           if(perm(p, l+1, r)) return 1;
           swap((p+l),(p+i));

       }
     }

    return 0;
}

int main() {

    char *p;
    int T, 
        n;

    scanf("%d", &T);

    while(T--) {
 
    scanf("%s", p);

    n = strlen(p); 

    if(perm(p, 0, n - 1) == 1) printf("Yes\n");

                 else     
                          printf("No\n");

    }

    return(0);
}