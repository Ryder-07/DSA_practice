#include<iostream>
using namespace std;


string kthDistinct(vector<string>& arr, int k) {
        int len_ar=arr.size();
        int len[len_ar];
        for(int i=0;i<len_ar;i++){
            len[i]=0;
        }

        for(int i=0;i<len_ar;i++){
            for(int j=0;j<len_ar;j++){
                if(len[i]==0){
                    if(arr[i]==arr[j]){
                        len[i]++;
                        len[j]=len[i];
                    }
                }
            }
        }
        int count=0;
        for(int i=0;i<len_ar;i++){
            if(len[i]==0){
                count++;
                cout<<arr[i];
            }
        }
        string output="";
        int count_k=0;
        if(count<k){
            output=="";
        }
        else {
            for(int i=0;i<len_ar;i++){
                if(len[i]==0 && count_k==k){
                    output = arr[i];
                }
                else if(len[i]==0){
                    count_k++;
                }
            }

        }
        return output;
    }


int main(){
	kthDistinct(["d","b","c","b","c","a"],2)
}
