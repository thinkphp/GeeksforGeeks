#include <stdio.h>
int main() {
int t;
scanf("%d",&t);
while(t--)
{
    char a, b, c;
    char S[50];
    scanf("%s",S);
    char *ptr=S;
    
while(*(ptr+1)!='\0') {
    
    a=*ptr;
    
    b=*(ptr+1);
    
    c=a-b;
    
    if(c==1||c==-1||c==25||c==-25) {
        
       ptr++;
       
       continue;
       
    } else {
        
           printf("NO\n");
           
           break;
     }
     ptr++;
}

    ptr++;

    if(*ptr=='\0') printf("YES\n");
}

return 0;

}