#include<iostream>
using namespace std;
bool arraySorted(int arr[], int n){
  bool result=true;
  int x=0;
  for(int i=1; i<n; i++){
    if(arr[i]>arr[x]){
      x=i;
    }
    else return result=false;
  }
 return result;
}
int main(){
  int arr[5];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0; i<5; i++){
    cin>>arr[i];
  }
  cout<<arraySorted(arr,5);
  return 0;
}