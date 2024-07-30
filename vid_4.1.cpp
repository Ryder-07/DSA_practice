#include<iostream>
using namespace std;

int main(){

    int row, column;

    cin>>row>>column;

    for(int i=0; i<=row-1; i++){
        for (int j=0; j<=column-1 ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
