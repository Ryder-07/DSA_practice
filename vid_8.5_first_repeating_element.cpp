#include <bits/stdc++.h>
using namespace std;

int main(){
	cout<<"hello";
	int z;
	cin>>z;
	int a1[z];
	
	for(int i=0;i<z;i++){
		cin>>a1[i];
	}
	const int N=1e2+2;
	int a2[N];
	for(int i=0;i<z;i++){
		a2[i]=-1;
	}
	int minidx=INT_MAX;
	for(int i=0;i<z;i++){
		
		if(a2[a1[i]]!=-1){
			minidx= min(minidx, a2[a1[i]]);
		}
		else{
			a2[a1[i]]=i;
		}
	
	}
	
	if (minidx ==INT_MAX){
		cout<<"-1"<<endl;
	}
	else{
		cout<<minidx<<endl;
	}
	return 0;
	
}
