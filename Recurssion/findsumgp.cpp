#include<iostream>
#include<math.h>
using namespace std;
double findsumgp(int k){
  if(k==0){
    return 1;
  }
  double smallOutput = findsumgp(k-1);
  return (smallOutput+1/pow(2,k));
}
int main(){
  int k;
  cout<<"Enter the value of k"<<endl;
  cin>>k;
  double output = findsumgp(k);
  cout<<output<<endl;
}