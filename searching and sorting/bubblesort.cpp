#include<iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-1-j; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];  //swapping of elements
                arr[i+1] = temp; 
        }
      }
    }
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int n,arr[5];
  cout<<"Enter the number of elements"<<endl;
  cin>>n;
  cout<<"Enter the array elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bubblesort(arr,n);
  return 0;
}