#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(char &a,char&b)
{
    char temp=a;
    a=b;
    b=temp;
}
void perm(string s,int start,int size,vector<string>&v)
{
    if(start==(size-1))
    {
        v.push_back(s);
        return ;
    }
    for(int i=start;i<size;i++)
    {
        swap(s[start],s[i]);
        perm(s,start+1,size,v);
        swap(s[start],s[i]);
    }
}
int main()
 {
        int t;
        cin>>t;
        while(t--)
        {
            string s;
            cin>>s;
            vector<string>v;
            perm(s,0,s.size(),v);
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
	return 0;
}