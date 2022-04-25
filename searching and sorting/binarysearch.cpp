#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int x){
  int startIndex=0,endIndex=n-1;
  for(int i=startIndex; i<=endIndex; i++){
   int midIndex = (startIndex + endIndex)/2;
   if(arr[midIndex] == x){
     return midIndex;
   }
   if(arr[midIndex] > x){
     endIndex=midIndex-1;
   }
   else startIndex=midIndex+1;
  }
  return -1;
}
int main(){
  int arr[5];
  int n,x;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  cout<<"Enter the elements"<<endl;
  for(int i = 0 ; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the element to be searched "<<endl;
  cin>>x;
  cout<<binarysearch(arr,n,x);
  return 0;
}