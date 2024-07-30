#include<iostream>
using namespace std;

int main(){
	int row;
	
	cin>>row;
	int n=2*row;
	for(int i=1; i<=row;i++){
		for(int j=1;j<n;j++){
			if (j<=i || j>=n-i){
				cout<<"*";
			}
			else{
			cout<<" ";
			   }
			
		}
		cout<<endl;
	}
	for(int i=row; i>=1;i--){
		for(int j=1;j<n;j++){
			if (j<=i || j>=n-i){
				cout<<"*";
			}
			else{
			cout<<" ";
			   }
			
		}
		cout<<endl;
	}
}
