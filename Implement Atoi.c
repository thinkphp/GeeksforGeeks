/*You are required to complete this method */
int atoi(string str)
{
    //str = 123;
    int ans = 0,
        sign = 1,//initialized the sign as positive
        index = 0;
        
        //if the number is negative, then update sign
        if(str[0] == '-') {
            sign = -1;
            index++;
        }
        
        for(;str[index]!='\0';++index){
            
            if(str[index] < 48 || str[index] > 57) return -1;
            
            ans = ans*10 + str[index] - '0';
        }
        
        if(sign == -1) return sign * ans;
                  else return ans;
    
} 