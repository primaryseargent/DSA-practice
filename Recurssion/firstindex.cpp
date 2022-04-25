#include<iostream>
using namespace std;
int firstindex(int arr[], int n, int x){
  if(n<=0){
    return -1;
  }
  if(arr[0]==x){
    return 0;
  }
  int smallOutput = firstindex(arr+1,n-1,x);
  if(smallOutput==-1)return -1;
  else return smallOutput+1;
}
int main(){
  int n,x;
  cout<<"Enter the number of elements"<<endl;
  cin >> n;
  int arr[n];
  cout<<"Enter the elements"<<endl;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout<<"Enter the value of x"<<endl;
  cin >> x;
  int output;
  output = firstindex(arr,n,x);
  cout<<output;
  return 0;
}