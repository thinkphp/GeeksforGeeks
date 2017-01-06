#include<stdio.h>
#include<stdlib.h>

int is_step(int x)
{
    int i=0,r,num1=0,num2=0;

    if(x<11) return 1;

    num1=x%10;
    x=x/10;
    
    while(x>0)
    {
        num2=x%10;
        x=x/10;
        if(num2-num1!=1 && num1-num2!=1) return 0;
        num1=num2;
    }
    return 1;
}

int main() {
    int n,i,count=0,a,b;

    scanf("%d",&n);

    int **arr = (int **)malloc(n * sizeof(int *));
    for (i=0; i<n; i++)
         arr[i] = (int *)malloc(2 * sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        arr[i][0]=a;
        arr[i][1]=b;
    }    

    for(i=0;i<n;i++)
    {
        count=0;
        for(a=arr[i][0];a<=arr[i][1];a++)
        {
            if(is_step(a)) 
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
	return 0;
}