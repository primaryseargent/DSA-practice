#include<iostream>
using namespace std;
int multiplication(int a , int b){
  if(b==0){
    return 0;
  }
  int smalloutput = multiplication(a,b-1);
  return smalloutput + a;
}
int main(){
  int a,b;
  cout<<"Enter the value of a and b"<<endl;
  cin>>a >>b;
  int output = multiplication(a,b);
  cout<<"multiplication is "<<output<<endl;
  return 0;
}