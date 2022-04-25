#include<iostream>
using namespace std;
string help(int n){
  string s[8] ={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  return s[n-2];
}
void printkeypad(int n, string output){
  if(n==0){
    cout<<output<<endl;
    return;
  }
  string input;
  int x = n%10;
  input = help(x);
  printkeypad(n/10,input[0]+output);
  printkeypad(n/10,input[1]+output);
  printkeypad(n/10,input[2]+output);
  if(input.length()==4)  printkeypad(n/10,input[3]+output);
}
int main(){
  int n;
  cin>>n;
  printkeypad(n,"");
  return 0;
}
