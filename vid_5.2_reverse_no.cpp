#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"enter the number";
	cin>>num;
	
	int reverse=0;
	while(num>0){
		int last_digit = num%10;
		reverse = reverse*10 + last_digit;
		num = num / 10; 
	}
	cout<<reverse<<" is the reversed number";
}
