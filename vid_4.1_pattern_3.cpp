#include<iostream>
using namespace std;

int main(){
	int height;
	
	cin>>height;
	for(int i=height; i>=1; i--){
		for (int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
