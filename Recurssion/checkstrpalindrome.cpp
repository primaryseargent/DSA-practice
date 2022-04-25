#include<iostream>
#include<string.h>
using namespace std;
bool help(char str[], int start, int end){
  if(start==end) return true;
  if(str[start]!=str[end]) return false;
  bool smallOutput = help(str,start+1,end-1);
  if(smallOutput) return true;
  else return false;
}
bool checkpalindrome(char str[]){
  int n = strlen(str);
  if(n==1) return true;
  else return help(str,0,n-1);
}
int main(){
   char str[5];
   cout<<"Enter the string"<<endl;
   cin>>str;
   cout<<checkpalindrome(str);
}