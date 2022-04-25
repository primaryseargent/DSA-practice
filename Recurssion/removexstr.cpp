#include<iostream>
#include<string.h>
using namespace std;
void removex(char arr[]){
  if(strlen(arr)==1 && arr[0] != 'x') return;
  removex(arr+1);
  if(arr[0] == 'x'){
    for(int i=1; i<=strlen(arr); i++){
      arr[i-1] = arr[i];
    }
  }
}
int main(){
  char arr[100];
  cin>>arr;
  removex(arr);
  cout<<arr<<endl;
  return 0;
}