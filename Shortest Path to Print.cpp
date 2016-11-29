#include <iostream>
#define WORD unsigned short

using namespace std;

const string moveLeft("Move Left");
const string moveRight("Move Right");
const string moveUp("Move Up");
const string moveDown("Move Down");
const string PressOK("Press OK");

int moveX(WORD destX, WORD x){

    while(destX != x) {
 
          if(destX < x) {

             cout<<moveLeft<<" ";
             x--;
 
          } else {

             cout<<moveRight<<" ";
             x++;

          }
    }  

    return x;
};

int moveY(WORD destY, WORD y){

    while(destY != y) {
 
          if(destY < y) {

             cout<<moveUp<<" ";
             y--;
 
          } else {

             cout<<moveDown<<" ";
             y++;
          }
    }  

    return y;
};

int main() {
    WORD T;

    cin>>T;
    while(T--) {
  
          string str;
          cin>>str;

          WORD x = 0, y = 0, 
               len = str.length();

          for(WORD i = 0; i < len; i++) {
              WORD D = str[i] - 'A';   

              WORD XMatrix = D % 5,
                   YMatrix = D / 5;

              if(XMatrix >= x || (XMatrix < x && YMatrix < y)) {

                 y = moveY(YMatrix, y);  
              }

              x = moveX(XMatrix, x);
              y = moveY(YMatrix, y);  

              cout<<PressOK<<" "; 
          }

          cout<<endl; 
            
    }
     

return(0);
}