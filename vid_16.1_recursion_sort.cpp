#include<iostream>
using namespace std;

bool sort(int arr[], int n){
	if(n==1){
		return 1;
	}
	
	bool rest_array=sort(arr+1,n-1);
	return (arr[0]<arr[1] && rest_array);


}

int main(){
	int arr[5]={1,2,3,4,5};
	cout<<sort(arr,5);
}
