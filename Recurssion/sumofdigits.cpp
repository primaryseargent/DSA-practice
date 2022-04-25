#include<iostream>
using namespace std;
int sumofdigits(int n){
  if(n==0){
    return 0;
  }
  if(n<10){
    return n;
  }
  int smallOutput = sumofdigits(n/10);
  return (smallOutput + (n%10));
}
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  int output = sumofdigits(n);
  cout<<"Sum of digits: "<<output<<endl;
  return 0;
}