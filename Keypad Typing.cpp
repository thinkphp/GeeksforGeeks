#include <iostream>
#include <map>

using namespace std;

int main()
{
    int T,len;
    map<char,int> myMap;
    myMap['a'] = 2;
    myMap['b'] = 2;
    myMap['c'] = 2;
    myMap['d'] = 3;
	myMap['e'] = 3;
	myMap['f'] = 3;
	myMap['g'] = 4;
	myMap['h'] = 4;
	myMap['i'] = 4;
	myMap['j'] = 5;
	myMap['k'] = 5;
    myMap['l'] = 5;
	myMap['m'] = 6;
    myMap['n'] = 6;
	myMap['o'] = 6;
	myMap['p'] = 7;
	myMap['q'] = 7;
	myMap['r'] = 7;
    myMap['s'] = 7;
	myMap['t'] = 8;
	myMap['u'] = 8;
	myMap['v'] = 8;
	myMap['w'] = 9;
	myMap['x'] = 9;
	myMap['y'] = 9;
	myMap['z'] = 9;
	
    cin>>T;
    
    while(T--){
       string str;    
       cin>>str;
       len = str.size();
       for(int i = 0; i < len; i++) {
           cout<<myMap[str[i]];
       }
       cout<<endl;
    }
	
	return 0;
}