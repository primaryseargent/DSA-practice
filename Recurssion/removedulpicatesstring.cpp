#include<iostream>
#include<string.h>
using namespace std;
void removeduplicate(char arr[]){
  if(strlen(arr) == 0) return;
  if(arr[0] == arr[1]){
    for(int i=1; i<=strlen(arr); i++){
      arr[i-1] = arr[i];
    }
    removeduplicate(arr);
  }
  else removeduplicate(arr+1);
}
int main(){
  char arr[100];
  cin >> arr;
  removeduplicate(arr);
  cout << arr << endl;
}
