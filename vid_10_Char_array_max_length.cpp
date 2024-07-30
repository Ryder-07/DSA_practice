#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    char arr[n + 1];
    cin.getline(arr, n +1);
    
    int i = 0;
    int current = 0, max = 0;
    int st = 0, maxst = 0;
    
    while (arr[i] != '\0') {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (current > max) {
                max = current;
                maxst = st;
            }
            current = 0;
            st = i + 1;
        } else {
            current++;
        }
        
        i++;
    }
    
    // Check last word
    if (current > max) {
        max = current;
        maxst = st;
    }
    
    cout << "Max length possible is " << max << endl;
    
    return 0;
}

