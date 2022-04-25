#include<iostream>
using namespace std;
void frequency(int arr[], int n){
  int freq = 1;
  int x = arr[0];
  for(int i = 1; i < n; i++){
    if(arr[i] == x){
      freq++;
      x = arr[i];
    }
    cout<<arr[i]<<" "<<freq<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter the number of elements"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  frequency(arr,n);
  return 0;
}