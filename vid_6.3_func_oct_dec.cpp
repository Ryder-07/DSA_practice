#include<iostream>
using namespace std;


int OctalToDecimal(int a){
	int ans=0;
	int x=1;
	while(a>0){
		int y=a%10;
		ans+=x*y;
		x*=8;
		a/=10;
	}
	return ans;
}


int main(){
	int a;
	cin>>a;

	cout<<OctalToDecimal(a)<<endl;
	
}
