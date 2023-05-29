#include <iostream>
using namespace std;
bool checkab(string s){
	if(s.size()==0) return true;
	if(s[0] == 'a') {
		if(s.substr(1).size()>1 && s.substr(1,2)=="bb") {
			return checkab(s.substr(3));
		}
		else return checkab(s.substr(1));
	}
	else return false;
}
int main(){
	string s;
	cin>>s;
	cout<<checkab(s);
}
