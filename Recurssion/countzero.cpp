#include<iostream>
using namespace std;
int countzero(int n){
  if(n==0){
    return 1;
  }
  if(n<10){
    return 0;
  }
  int smallOutput = countzero(n/10);
    if(n%10 == 0){
    return smallOutput + 1;
  }
  return smallOutput;
}
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  int output = countzero(n);
  cout<<"No. of zero is found "<<output<<endl;
  return 0;
}