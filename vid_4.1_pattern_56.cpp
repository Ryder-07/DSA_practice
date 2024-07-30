#include<iostream>
using namespace std;

int main(){
	
	int row,k=1;
	
	cin>>row;
	
	for(int i=0;i<=row;i++){
		for(int j=0; j<i; j++){
			cout<<k<<" ";
			k++;
			
		}
		cout<<endl;
	}
}
