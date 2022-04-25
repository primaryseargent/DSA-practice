#include<iostream>
using namespace std;
int secondLargest(int arr[], int n){
   int result = -1 , largest = 0;
   for(int i = 1; i<n; i++){
     if(arr[i]>arr[largest]){
       result=largest;
       largest=i;
     }
     else if(arr[i]!=arr[largest]){
       if(result==-1 || arr[i]>arr[result]){
         result=i;
       }
     }
   }
   return result;
}
int main(){
  int arr[5];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0; i<5; i++){
    cin>>arr[i];
  }
  cout<<secondLargest(arr,5);
  return 0;
}