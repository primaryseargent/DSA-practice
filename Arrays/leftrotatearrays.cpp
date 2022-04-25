#include<iostream>
#include<stdlib.h>
using namespace std;
void leftrotatebyone(int arr[], int n){
  int temp= arr[0];
  for(int i=0; i<n; i++){
    arr[i]=arr[i+1];
  }
  arr[n-1]=temp;
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
  leftrotatebyone(arr,n);
  return 0;
}