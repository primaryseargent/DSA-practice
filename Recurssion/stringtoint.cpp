#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int convert(char arr[]){
  int a;
  if(strlen(arr) == 1){
    a = arr[0] - '0';
    return a;
  }
  int b = convert(arr+1);
  int c = arr[0] - '0';
  return c*pow(10,strlen(arr)-1)+b;
}
int main(){
  char arr[5];
  cin>>arr;
  cout<<convert(arr)<<endl;
}