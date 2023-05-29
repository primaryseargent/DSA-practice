#include <iostream>
using namespace std;
int pow(int a,int b){
	if(b==0) {
		return 1;
	}
	int smallOutput = pow(a,b-1);
	return a*smallOutput;
}
int main(){
	int a,b,output;
	cin >> a >> b;
	output=pow(a,b);
	cout<<output;
	return 0;
}
