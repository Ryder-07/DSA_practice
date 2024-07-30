#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>> n;
	
	int arr[n+1];
	arr[n]=-1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int mx=-1;
	int global_max=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]>mx&&arr[i]>arr[i+1]){
			global_max++;
			cout<<arr[i];
		}
		mx=max(mx,arr[i]);
	}
	cout<<global_max;
}
