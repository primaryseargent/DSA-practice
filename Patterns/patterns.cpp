#include<iostream>
using namespace std;
int main(){
  for(int i=1; i<=4; i++){
    for(int j=1; j<=4; j++){
      if(i==j){
        cout<<"*";
      }
      else cout<<"0";
    }
    cout<<"*";
    for(int j=4; j>=1; j--){
      if(i==j){
        cout<<"*";
      }
      else cout<<"0";
    }    
    cout<<endl;
  }
}