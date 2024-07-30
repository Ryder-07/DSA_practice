#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int ans){
	  for(int i=0;i<n;i++){
	  	if (arr[i]==ans){
	  		return i;
		  }
	  }
	  return -1;
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element to be found";
	int ans;
	cin>>ans;
	cout<<"required element is at "<<LinearSearch(arr,n,ans)<<"th index";
}
