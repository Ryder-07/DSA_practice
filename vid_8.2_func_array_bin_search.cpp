#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int ans){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if (arr[mid]==ans){
			return mid;
		}
		else if(arr[mid]>ans){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the number";
	int ans;
	cin>>ans;
	
	cout<<binarySearch(arr,n,ans)<<endl<<arr[binarySearch(arr,n,ans)];
}
