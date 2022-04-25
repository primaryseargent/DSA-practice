#include<iostream>
#include<stdlib.h>
using namespace std;
void reverseArray(int arr[], int n){
  int low = 0, high = n-1;
  while(low < high){
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[4];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0; i<4; i++){
    cin>>arr[i];
  }
  reverseArray(arr,4);
  return 0;
}