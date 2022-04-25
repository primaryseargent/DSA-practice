#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int x){
  if (start > end) return -1;
  int mid = (start+end) / 2;
  if (arr[mid]==x)return mid;
  if(arr[mid]<x){
    return binarySearch(arr,mid+1,end,x);
  }
  else return binarySearch(arr,start,mid-1,x);
}
int main(){
  int n;
  cin>>n;
  int x;
  int arr[n];
  cout<<"Enter the elements in the array"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the element"<<endl;
  cin>>x;
  cout<<binarySearch(arr,0,n-1,x);
  return 0;
}