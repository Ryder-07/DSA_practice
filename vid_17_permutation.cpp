#include<bits/stdc++.h>
using namespace std;
	
vector<vector<int>> ans;
void permutation(vector<int> &a, int idx){
	if(idx == a.size()){
		ans.pushback(a);
		return;
	}
	for(int i= idx;i<a.size;i++){
		swap(a[i],a[idx]);
		permutation(a,idx+1);
		swap(a[i],a[idx]);
	}
}


int main(){

	int n; cin>>n;
	vector <int> a(n);
	for(auto &i :a)
		cin>>i;
	
	
	permutation(a,o);
	for(auto v : ans){
		cout<<i<< " ";
		
	}cout<<endl;
	
	
	return 0;
}
