#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int a){
	for (int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
		
	}
	return true;
}
int prime(int a,int b){
	for(int i=a;i<=b;i++){
		if (isPrime(i)==true){
			cout<<i<<endl;
		}
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	
	cout<<prime(a,b);
}
