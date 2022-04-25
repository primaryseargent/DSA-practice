#include<iostream>
using namespace std;
int sumarrays(int arr[], int n){
  if(n<=0){
    return 0;
  }
  int smallOutput = (sumarrays(arr,n-1));
  return smallOutput+arr[n-1];
}
int main(){
  int n;
  cout<<"Enter the number of elements"<<endl;
  cin >> n;
  int arr[n];
  cout<<"Enter the elements"<<endl;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int output;
  output = sumarrays(arr,n);
  cout<<output;
  return 0;
}