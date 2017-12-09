#include<stdio.h>
#include<math.h>

int isPerfectSquare(int z){
    
    int n = sqrt(z);
    
    return (n*n == z);
    
};
int main()
{ 
    int T,n;
    scanf("%d",&T);
    
    while(T--){
        scanf("%d", &n);
        if(isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4)){
            printf("%s\n","Yes");
        }else
            printf("%s\n","No");
    }
	
	return 0;
}