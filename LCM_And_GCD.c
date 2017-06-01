/**

  For 2 given numbers find out their LCM and GCD.

  Input:
  The first line contains an integer 'T' denoting the total number of test cases. In each test cases, there are two numbers a and b.


  Output:
  Find LCM and HCF. 

 */

#include <stdio.h>

int gcd_rec(int a, int b);

int main() {

    int T,
        a, b,
        gcd,
        lmc;
    
    scanf("%d", &T); 

    while(T--) {

          scanf("%d %d", &a, &b);

          gcd = gcd_rec(a, b);

          lmc = (a * b) / gcd;

          printf("%d %d\n", lmc, gcd); 
    }; 


    return(0);
};

int gcd_rec(int a, int b) {

    if(b == 0) return a;

    else  return gcd_rec(b, a % b);  
};

