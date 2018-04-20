#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(abs(a) > 100 || abs(b) >100){
  	cout<<"Wrong Input";
  }else {
    cout<<a*b;
  }
  return 0;
}
