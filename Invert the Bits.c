#include<stdio.h>
#define UI unsigned int
int main()
{
	int T;
	UI n;
	scanf("%d", &T);
	while(T--) {
	    scanf("%u", &n);
	    printf("%u\n", ~n);
	}
	return 0;
}