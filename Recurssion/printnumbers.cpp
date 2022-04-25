#include<iostream>
using namespace std;
int number(int n){
  if(n==0) return 0;
  if(n==1) {
    cout<<n<<" ";
    return 1;
  }
  int smallOutput = number(n-1);
  cout<<n<<" ";
  return 1+smallOutput;
}
int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  number(n);
}