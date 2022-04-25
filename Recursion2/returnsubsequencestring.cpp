#include<iostream>
#include<string.h>
using namespace std;
int subseq(string str, string output[]){
  if(str.empty()){
    output[0] = "";
    return 1;
  }
  int smallOutputsize = subseq(str.substr(1), output);
  for(int i = 0; i < smallOutputsize; i++){
    output[i + smallOutputsize] = str[0] + output[i]; 
  }
  return 2*smallOutputsize;
}
int main(){
  string str;
  getline(cin, str);
  string output[100];
  int size = subseq(str,output);
  for(int i = 0; i < size; i++){
    cout<<output[i]<<" ";
  }
  return 0;
}