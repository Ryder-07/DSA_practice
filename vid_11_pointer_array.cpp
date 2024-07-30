#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6,7};
	
	cout<<*arr<<endl; //inde=xing pointer to point to the first index of the array
	
	int *ptr =arr;
	cout<<"using indexing pointer";
	for(int i=0;i<7;i++){
		cout<<endl<<*(arr+i)<<endl;
	} 
	cout<<"using normal pointer";
	for(int i=0;i<7;i++){
		cout<<endl<<*ptr<<endl;
		ptr++;
	}
}
