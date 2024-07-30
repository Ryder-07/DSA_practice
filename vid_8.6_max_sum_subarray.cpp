#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=arr[j];
			maxsum=max(maxsum,sum);
		}
	}
	
	cout<<maxsum;
	return 0;
}

