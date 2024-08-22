#include<iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Create temporary arrays
    int arr1[n1], arr2[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arr1[], if any
    while (i < n1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy the remaining elements of arr2[], if any
    while (j < n2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        // Sort first and second halves
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);

        // Merge the sorted halves
        Merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {18, 52, 7, 3, 7, 3, 9, 9, 67, 3, 5, 67, 2, 78};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

