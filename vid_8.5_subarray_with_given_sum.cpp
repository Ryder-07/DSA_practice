#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int start = 0, end = 0, sum = 0;
    int st = -1, en = -1;

    // Expanding the window by adding elements to the sum
    while (end < n) {
        sum += arr[end];

        // Shrinking the window from the left if the sum exceeds s
        while (sum > s && start <= end) {
            sum -= arr[start];
            ++start;
        }

        // If the sum matches s, record the start and end indices
        if (sum == s) {
            st = start + 1; // Converting to 1-based indexing
            en = end + 1;   // Converting to 1-based indexing
            break;
        }

        ++end;
    }

    cout << st << " " << en << endl;
    return 0;
}

