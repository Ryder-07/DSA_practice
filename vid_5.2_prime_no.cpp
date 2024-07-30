#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int num;
	cout<<"enter the number";
	cin>>num;
	bool flag=0;
	for(int i=2;i<=sqrt(num);i++){
		if (num%i == 0){
			flag =1;
		}
	}
	if (flag == 0){
		cout<<"prime number";
	}
	else{
		cout<< "not prime";
	}
	
	return 0;
}
