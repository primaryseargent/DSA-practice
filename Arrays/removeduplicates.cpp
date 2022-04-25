//remove duplicates from sorted arrays
#include<iostream>
using namespace std;
void removeDuplicate(int arr[],int n){
  int result=1;
  for(int i=1; i<n; i++){
    if(arr[i]!=arr[result-1]){
      arr[result]=arr[i];
      result++;
    }
  }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<"SIze"<<result<<endl;
}
int main(){
  int n;
  cout<<"Enter the no of elements"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  removeDuplicate(arr,n);
  return 0;
}