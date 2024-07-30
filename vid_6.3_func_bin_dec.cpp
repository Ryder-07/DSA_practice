#include<iostream>
using namespace std;

int BinaryToDecimal(int a){
	int ans=0;
	int x=1;
	while(a>0){
	
	int y=a%10;
	ans += x*y;
	x*=2;
	a/=10;
}
return ans;
}


int main(){
	int a;
	cin>>a;

	cout<<BinaryToDecimal(a)<<endl;
}
