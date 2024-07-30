#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="21342142135423167897";
	
	sort(str.begin(),str.end(),greater<int>());
	
	cout<<str<<endl;
}
