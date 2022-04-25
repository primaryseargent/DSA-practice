#include<iostream>
#include<math.h>
using namespace std;
double geometric(int k){
  if(k==0) return 1;
  double smallOutput = geometric(k-1);
  return smallOutput+=1/pow(2,k);
}
int main(){
  int k;
  cout<<"Enter the value of k"<<endl;
  cin>>k;
  cout<<geometric(k)<<endl;
}