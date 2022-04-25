#include<iostream>
using namespace std;
void print_subsequence(string input, string output){
  if(input.length()==0){
    cout<<output<<endl;
    return; 
  }
  print_subsequence(input.substr(1), output);
  print_subsequence(input.substr(1), output+input[0]);
}
int main(){
  string s;
  cin>>s;
  print_subsequence(s,"");
  return 0;
}