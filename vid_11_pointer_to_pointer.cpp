#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=10;
	int *ptr= &a;
	int **ptp=&ptr;
	
	cout<<*ptp<<endl;
	cout<<ptp<<endl;
	cout<<**ptp<<endl;
	
}
