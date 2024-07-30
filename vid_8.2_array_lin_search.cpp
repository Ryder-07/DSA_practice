#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	cout<<"enter the number to be searched";
	int a;
	cin>>a;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]==a){
			cout<<endl<<"given number found at "<<i<<"th index, meaning its the "<<i+1<<"th element";
			break;
		}
		cout<<"hehe"<<endl;
	}
}
