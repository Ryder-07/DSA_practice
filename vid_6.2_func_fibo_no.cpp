#include<iostream>
using namespace std;

void fibo(int a){
	int first =0;
	int second =1;
	int next;
	
	for (int i =1;i<=a;i++){
		cout<<first<<endl;
		next=first+second;
		first=second;
		second=next;
	}
}
int main(){
	int a;
	cin>>a;
	fibo(a);
	return 0;
}


