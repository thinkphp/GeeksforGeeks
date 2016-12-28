#include <stdio.h>
int win[8][3]={{0,1,2},{3,4,5},{6,7,8},
               {0,3,6},{1,4,7},{2,5,8},
               {0,4,8},{2,4,6}
	    };
int check(char *s,char ch)
{
    int i;
    
    for(i=0;i<8;i++)
    {
        if(s[win[i][0]]==ch && 
           s[win[i][1]]==ch && 
           s[win[i][2]]==ch) return 1;
    }
    return 0;
}

int main() {
	
	int i,t,flag,countx,counto;
	char s[1000];
	scanf("%d",&t);
	
	while(t--)
	{
	    flag=0;
	    for(i=0;i<9;i++)
	        scanf("%s",&s[i]);
	    
	    countx = counto = 0;
	    for(i=0;i<9;i++)
	    {
	        if(s[i]=='X')countx++;
	        else if(s[i]=='O')counto++;
	    }
	    if(countx==counto||countx==counto+1)
	    {
	        if(check(s,'O'))
	        {
	            if(check(s,'X'))flag=1;
	            
	            else if(counto!=countx)flag=1;
	        }
	    
	    if(check(s,'X')&&countx!=counto+1)flag=1;
	    }
	    else flag=1;
	    
	    if(flag==1) printf("Invalid\n");
	    
	    else 
	               printf("Valid\n");
	}
	return 0;
}