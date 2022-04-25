#include<iostream>
#include<string.h>
using namespace std;
void replacepi(char arr[]){
  if(strlen(arr)<=1){
    return ;
  }
  replacepi(arr+1);
  if(arr[0]=='p' && arr[1]=='i'){
    for(int i = strlen(arr); i>=0 ; i--){
      arr[i+2] = arr[i];
    }
    arr[0] = '3';
    arr[1] = '.';
    arr[2] = '1';
    arr[3] = '4';
  }
}

int main(){
  char arr[4];
  cout<<"Enter the string"<<endl;
  cin>>arr;
  replacepi(arr);
  cout<<arr;
  return 0;
}