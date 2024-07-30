#include<iostream>
using namespace std;
	
int main(){
	int row, col;

	cout<<"enter the rows and column below"<<endl;
	cin>>row>>col;
	
	for(int i=0; i<=row-1; i++){
		for(int j=0; j<=col-1; j++){
			if (i==0 || j==0){
				cout<<"*";
			}
			else if(i== row-1 ||j== col-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
