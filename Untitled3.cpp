#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="jksabhdfjsbdjafkjkba;vlskanfsaiwe";
	
	int arr[26];
	
	for(int i=0;i<26;i++){
		arr[i]=0;
	}
	
	for(int i=0;i<str.size();i++){
		arr[str[i]-'a']++;
	}
	
	int ans=0;
	char ans_v='a';
	
	for(int i=0;i<26;i++){
		if (arr[i]>ans){
			ans=arr[i];
			ans_v='a'=ans;
		}
	}
	
	cout<<"the frequency is "<<
}
