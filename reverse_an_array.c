#include <stdio.h>

void reverse1(int a[], int start, int end) {
 int i,j,temp;

 for(i = start, j = end; i < (end+1)/2; i++, j--) {

     temp = a[i];
     a[i] = a[j];
     a[j] = temp;  
 }

}

void reverse2(int a[], int start, int end) {

 int i,j,temp;

 while(start < end) {

     temp = a[start];
     a[start] = a[end];
     a[end] = temp;  
     start++;
     end--;
 }
}


int main() {
 int i,
     a[100],
     n, 
     T;

 scanf("%d", &T);
 while(T--) {

 scanf("%d", &n);
 for(i = 0; i < n; i++) {
     scanf("%d", &a[i]);
 }
 reverse1(a,0,n-1);
 for(i = 0; i < n; i++) printf("%d ",a[i]);
 printf("\n");
 }
 return(0);
}