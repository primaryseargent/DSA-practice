#include<iostream>
using namespace std;
void merge(int arr1[], int n1, int arr2[], int n2){
  int merge[n1+n2];
  int i=0, j=0, k=0;
  while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
      merge[k++] = arr1[i++];
    }
    else{
      merge[k++] = arr2[j++];
    }
  }
  while(i<n1){
    merge[k++] = arr1[i++];
  }
  while(j<n2){
    merge[k++] = arr2[j++];
  }
  for(int i=0; i<n1+n2; i++){
    cout<<merge[i]<<" ";
  }
}
int main(){
  int n1, n2;
  cout<<"Enter the value of n1 and n2"<<endl;
  cin>>n1>>n2;
  int arr1[n1], arr2[n2];
  cout<<"Enter the elements in array 1"<<endl;
  for(int i=0; i<n1; i++){
    cin >> arr1[i];
  }
  cout<<"Enter the elements in array 2"<<endl;
  for(int i=0; i<n2; i++){
    cin >> arr2[i];
  } 
  merge(arr1,n1,arr2,n2);
  return 0;
}