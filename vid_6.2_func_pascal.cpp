#include<iostream>
using namespace std;

int fact(int a){
	int result=1;
	for (int i=a;i>0;i--){
		result*=i;
		
	}
	return result;
}

int main(){
	int n;
	cin>>n;
	int ncr;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=i;j++){
			ncr=fact(i)/(fact(i-j)*fact(j));
			cout<<ncr; 	
		}
		cout<<endl;
	}

}
