int findLongestConseqSubseq(int arr[], int n)
{
    int vec[100000]={0},
        max = 0;
        
        for(int i = 0; i < n; i++){
            
            if(arr[i] > max) max = arr[i];
                
            vec[arr[i]] = 1;
        
        }
        int len = 0;
        int sublen = 0;
        
        for(int j = 0; j <= max; j++) {
         
            if(vec[j] == 1) {
                
                sublen++;
                
            }  else {
                
               if(sublen > len) len = sublen; 
                
               sublen = 0;
            }   
        }
        
        if(sublen > len) len = sublen;
    
    return len;
}