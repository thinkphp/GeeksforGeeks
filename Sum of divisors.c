#include <stdio.h>
int main()
{
	//code
        int i,cases;
        scanf("%d",&cases);
        for(i=0;i<cases;i++)
        {
             int n,j,k,l,count = 0,array[1000];
             scanf("%d",&n);
             for(j=1;j<n;j++)
             {
                 if(n%j==0)
                    count+=j;
             }
             printf("%d\n",count);
        }
	return 0;
}