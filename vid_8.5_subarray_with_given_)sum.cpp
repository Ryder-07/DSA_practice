#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s;
	cin>>n,s;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	int i=0,j=0,st=-1,en=-1,sum=0;
	
	while(j<n&&sum+arr[j]<=s){
		sum+=ap[j];
		j++;
	}
	if(sum==s){
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}
	
}
