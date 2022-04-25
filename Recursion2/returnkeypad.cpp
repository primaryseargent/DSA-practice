#include<iostream>
#include<string.h>
using namespace std;
int returnkeypad(int n,string output[]){
  string input;
  if(n==0){
    output[0] = "";
    return 1;
  }
  int x = n%10;
  int smallOutput = returnkeypad(n/10,output);
          switch(x){
            case 2: input = "abc";
                break;
            case 3: input = "def";
                break;
            case 4: input = "ghi";
                break;
            case 5: input = "jkl";
                break;
            case 6: input = "mno";
                break;
            case 7: input = "pqrs";
                break;
            case 8: input = "tuv";
                break;
            case 9: input = "wxyz";
                break;
               
    }
    int ans_size = smallOutput*(input.size());
    string temp[ans_size];
    int k=0;
    for(int i=0; i<smallOutput; i++){
        for(int j=0; j<input.size(); j++){
            temp[k] = output[i]+input[j];
            k++;
        }

    }
    for(int i=0; i<ans_size; i++){
      output[i] = temp[i];
    }
    return input.size()*smallOutput;
}
int main(){
  string output[500];
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int c = returnkeypad(n,output);
  for(int i=0; i<c; i++){
    cout<<output[i]<<endl;
  }
}