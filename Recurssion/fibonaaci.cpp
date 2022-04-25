#include<iostream>
using namespace std;
int fibona(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  int smallOutput1 = fibona(n-1);
  int smallOutput2 = fibona(n-2);
  return (smallOutput1+smallOutput2);
}
int main(){
  int n;
  cout<<"Enter the nth element for fibonaaci"<<endl;
  cin>>n;
  cout<<fibona(n);
}