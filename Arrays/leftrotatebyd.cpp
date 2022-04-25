#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high){
  while(low<high){
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}
void leftrotatebyd(int arr[], int n, int d){
  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);
}
//--------------------------------
// void leftrotatebyd(int arr[], int n, int d){
//   int temp[d];
//     for(int i=0; i<d; i++){
//     temp[i]=arr[i];
//   }
//     for(int i=d; i<n; i++){
//     arr[i-d]=arr[i];
//   }
//     for(int i=0; i<d; i++){
//     arr[n-d+i]=temp[i];
//   }
// }
//---------------------------------
// void leftrotatebyone(int arr[], int n){
//   int temp= arr[0];
//   for(int i=0; i<n; i++){
//     arr[i]=arr[i+1];
//   }
//   arr[n-1]=temp;
// }
// void leftrotatebyd(int arr[], int n, int d){
//   for(int i=0; i<d; i++){
//     leftrotatebyone(arr,n);
//   }
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" "<<endl;
//   }
// }
//----------------------------------
int main(){
  int n,d;
  cout<<"Enter the no of elements"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the value of d"<<endl;
  cin>>d;
  leftrotatebyd(arr,n,d);
     for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}