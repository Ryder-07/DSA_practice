#include<iostream>
using namespace std;

int fact(int a){
	int result=1;
	for (int i=a;i>0;i--){
		result*=i;
		
	}
	return result;
}

int main(){
	int n,r;
	cin>>n>>r;
	int ncr;
	
	ncr=fact(n)/(fact(n-r)*fact(r));
	cout<<ncr; 
}
