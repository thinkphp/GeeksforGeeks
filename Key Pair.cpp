include<iostream>
using namespace std;
int main()
{
    int t,arr[1000];
    cin>>t;
    
    while(t > 0)
    {
        int n,sum;
        int i,temp;
        int status=0;
        bool hash[100000]={0};
        cin>>n;
        cin>>sum;
        for(int i=0;i<n;i++)
            cin>>arr[i];
         for (i = 0; i < n; i++)
         {
               temp = sum - arr[i];
               if (temp >= 0 && hash[temp] == 1)
               {
                    status=1;
                    break;
               }    
        
                hash[arr[i]] = 1;
         }
         if(status==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        
        t--;
    }
	
	return 0;
}