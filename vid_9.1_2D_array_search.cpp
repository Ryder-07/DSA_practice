#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	int arr[n][m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"enter the element you want to find";
	int num;
	cin>>num;
	bool tag=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		if (arr[i][j]==num){
			cout<<"position is "<<i+1<<" "<<j+1;
			tag=true;
		}
		}cout<<endl;
	}
	if(tag==false){
		cout<<"value not found in matrix";
	}
}
