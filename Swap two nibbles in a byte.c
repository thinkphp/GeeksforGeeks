#include<iostream>

using namespace std;

int main()
{
	int T,n,l,r,s;
	scanf("%d",&T);
	
	while(T--){
	   cin>>n;
	   l = n<<4;
	   r = n>>4;
	   s = l|r;
	   s = s&255;
	   cout<<s<<endl;
	}
	return 0;
}