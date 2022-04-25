#include<iostream>
using namespace std;
void leaders(int arr[], int n){
  int current_leader=arr[n-1];
  cout<<current_leader;
  for(int i=n-2; i>=0; i--){
    if(arr[i]>current_leader){
      current_leader=arr[i];
      cout<<" "<<current_leader;//it will print leaders in reverse order to makes that int correct order insert the leader into an array and then reverse the arrray
    }
  }
}
// void leaders(int arr[], int n){
//   for(int i = 0; i < n; i++){
//     bool flag=false;
//     for(int j = i+1; j < n; j++){
//       if(arr[i]<=arr[j]){
//         flag=true;
//        break;
//      }
//    }
//   if(flag==false){
//     cout<<arr[i]<<" ";
//   }
//   }
// }
int main(){
  int n;
  cout<<"Enter the number of elements"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  leaders(arr,n);

}