#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int original_num = num;  // Store the original number for comparison
    int count = 0;
    int temp = num;

    // Calculate the number of digits
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    int check = 0;
    temp = num;  // Reset temp to the original number

    // Calculate the sum of each digit raised to the power of count
    while (temp > 0) {
        int digit = temp % 10;
        check += pow(digit, count);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (check == original_num) {
        cout << original_num << " is an Armstrong number." << endl;
    } else {
        cout << original_num << " is not an Armstrong number." << endl;
    }

    return 0;
}

