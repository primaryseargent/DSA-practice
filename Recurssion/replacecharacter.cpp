#include<iostream>
#include<string.h>
using namespace std;
void replace(char arr[], char a, char b){
  if(strlen(arr)==0) return;
  replace(arr+1, a, b);
  if(arr[0] == a){
    arr[0] = b;
  }
}
int main(){
  char arr[100];
  cin>>arr;
  char a,b;
  cin >> a >> b;
  replace(arr,a,b);
  cout<<arr<<endl;
  return 0;
}