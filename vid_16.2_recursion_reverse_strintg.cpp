#include<iostream>
using namespace std;

void reverse(string str){
	if(str.length()==0){
		return;
	}
	
	string s = str.substr(1);
	reverse(s);
	cout<<str[0];
}


int main(){

	
	reverse("binod");
}
