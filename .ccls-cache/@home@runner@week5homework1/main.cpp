#include <iostream>
#include <string>
using namespace std;

int main() {
  //make variables
  int a;
  int b;
  //create max and min
  int c = 1000000000;
  int d = -1000000000;
  cin>>a>>b;
  //checking loop
  if(c>a and b>d){
    //output loop
    if(a>b){
      cout<<a<<endl<<b;
    }
    //output loop
    else if(a<b){
      cout<<b<<endl<<a;
    }      
}