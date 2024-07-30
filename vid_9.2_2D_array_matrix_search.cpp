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
	
	
	
	int ans,r=0,c=m-1;
	cin>>ans;
	
	bool found=false;
	
	while (r<n and c>=0){
		if(arr[r][c]==ans){
			found=true;
			break;
		}
		else if(arr[r][c]>ans){
			c--;
		}
		else{
			r++;
		}
		
	}
	
	if (found){
		cout<< "Element found";
	}
	else{
		cout<<"Element not found";
	}
	
	return 0;
}
