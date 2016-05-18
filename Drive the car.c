#include<stdio.h>
#include<malloc.h>


int main()
{     int T, *tracks, i, n, k, max;
      scanf("%d", &T);
      
       while(T--) {
           scanf("%d %d", &n, &k);
           tracks = (int*)malloc(sizeof(int)*n);
           for(i = 0; i < n; i++) {
               scanf("%d", (tracks+i));
           }
           max = k;
           for(i = 0; i < n; i++) {
               if(tracks[i] > max) max = tracks[i];
           }
           if(max != k) printf("%d\n",(max-k));
                  else  printf("%d\n",-1);
           
       }
       return(0);
}