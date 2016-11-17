#include<stdio.h>
unsigned sum_of_primes(unsigned n) {
      unsigned sum = 0, 
               last_digit;
      while(n){
          last_digit = n % 10;
          if(last_digit == 2 || last_digit == 3 || last_digit == 5 || last_digit == 7) sum+=last_digit;
          n /= 10; 
      }
      return sum;
};
int main()
{
	unsigned T,n;
	scanf("%d", &T);
	while(T--)
	{
	    scanf("%d", &n);
	    printf("%u\n", sum_of_primes(n));
	}
	return 0;
}