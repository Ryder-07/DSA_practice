#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=10;
	int* aptr;
	aptr = &a;
	
	cout<< aptr<< endl;
	cout<< &a <<endl;
	cout<< a <<endl;
	cout<< *aptr<<endl;
	return 0;
}
