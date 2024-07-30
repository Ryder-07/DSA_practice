#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,o;
	cin>>n>>m>>o;
	
	int arr1[n][m],arr2[m][o],arr3[n][o];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr1[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<o;j++){
			cin>>arr2[i][j];
		}
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<o;j++){
			for(int k=0;k<m;k++){
				arr3[i][j] += arr1[i][k]*arr2[k][j];
			}
			
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
}
