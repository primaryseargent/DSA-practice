#include<iostream>
using namespace std;
void towerofhanoi(int n,char source, char auxilary, char desitination){
  if(n==0) return;
  if(n==1) {
    cout<<source<<" "<<desitination<<endl;
    return;
  }
  towerofhanoi(n-1,source,desitination,auxilary);
  cout<<source<<" "<<desitination<<endl;
  towerofhanoi(n-1,auxilary,source,desitination);
}
int main(){
  towerofhanoi(3,'a','b','c');
  return 0;
}