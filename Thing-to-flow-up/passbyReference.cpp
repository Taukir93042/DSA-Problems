
#include<iostream>
using namespace std;
//pass by value
// void modify(int x){
//   x = x +10;
// }


void modify(int &x,int &y){
     x = x+y;
     y = x-y;
     x = x-y;
}
int main(){
  int x = 10;
  int y=14;
  modify(x,y);
  cout<<x<<" "<<y;
}
