#include<iostream>
using namespace std;

int main(){
	int row;
	cin>>row;
	
	for (int i=1;i<=row;i++){
		for(int j=0;j<=row-i;j++){
			cout<<" ";
		}
		for(int k=i;k>=1;k--){
			cout<<k;
		}
		for(int l=2;l<=i;l++){
			cout<<l;
		}
		cout<<endl;
	}
}
