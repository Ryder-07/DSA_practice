#include<iostream>
#include<cmath>
using namespace std;

bool pytha(int a,int b,int c){
	int y,z,x = max(a,max(b,c));
	if (a==x){
		y=b;
		z=c;
	}
	else if(b==x){
		y=a;
		z=c;
	}
	else{
		y=a;
		z=b;
	}
	if (pow(x,2)==pow(y,2)+pow(z,2)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int result = pytha(a,b,c);
	if (result ==true){
		cout<<"pythagorian triplet found";
	}
	else{
		cout<<"not a pytha triplet";
	}
}
