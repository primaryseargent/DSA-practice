#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void pairstair(char arr[]){
  if(strlen(arr)==1) return;
  pairstair(arr+1);
  if(arr[0]==arr[1]){
    int i;
    for(i=strlen(arr); i>=1; i--){
      arr[i+1] = arr[i];
    }
    arr[1] = '*';
  }
}
int main(){
  char arr[1000];
  cin>>arr;
  pairstair(arr);
  cout<<arr;
}