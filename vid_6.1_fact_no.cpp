#include<iostream>
using namespace std;

int factorial(int a){
	int result = 1;
	while(a>1){
		result*=a;
		a--;
	}
	return result;
}
int main(){
	int num=0;
	cin>>num;
	
	cout<<factorial(num);
}
