#include<iostream>
using namespace std;

int main(){
	int row;
	cin>>row;
	
	for(int i=1;i<row+1 ;i++){
		for (int j=1; j<=5;j++){
			if(j<=row-i){
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
