#include<iostream>
#include<stdlib.h>
using namespace std;
void movezeros(int arr[], int n){
  int count=0;
  for(int i=0; i<n; i++){
    if(arr[i]!=0){
      swap(arr[i], arr[count]);
      count++;
    }
  }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" "<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter the no of elements"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  movezeros(arr,n);
  return 0;
}