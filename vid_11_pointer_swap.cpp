#include<bits/stdc++.h>
using namespace std;

void swap( int *a, int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

int main(){
	int a=3,b=5;
	
	swap(&a,&b);
	cout<<a<<endl<<b<<endl;
	int *aptr=&a;
	int *bptr=&b;
	swap(aptr,bptr);
	cout<<a<<endl<<b<<endl;	
}
