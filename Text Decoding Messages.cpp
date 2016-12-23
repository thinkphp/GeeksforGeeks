#include<bits/stdc++.h>
using namespace std;
int total_codes(string str,int i,int j)
{
    if(i>j )
     return 1;
     
    if(str[i]=='0')
      return 0;
    
    if(i==j)
     return 1;
    
    if(str[i]=='1') 

      return total_codes(str,i+1,j)+total_codes(str,i+2,j);
      
    else if(str[i]=='2' && str[i+1]>='0' && str[i+1]<='6') 

      return total_codes(str,i+1,j)+total_codes(str,i+2,j);
    
    else
      return total_codes(str,i+1,j);
    
}
int main()
 {
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ans=total_codes(str,0,n-1);
        cout<<ans<<endl;
    }
	return 0;
}