#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n) {
    int spf[100] = {0};  // Smallest Prime Factor array
    
    // Initialize spf array
    for (int i = 2; i < 100; i++) {
        spf[i] = i;
    }

    // Sieve of Eratosthenes
    for (int i = 2; i * i < 100; i++) {
        if (spf[i] == i) {  // i is a prime number
            for (int j = i * i; j < 100; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }

    // Prime factorization
    while (n != 1) {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n >= 100) {
        cout << "Input should be less than 100" << endl;
        return 1;
    }

    primeFactor(n);
    return 0;
}

