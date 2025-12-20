#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    // Merge two sorted halves into temp array
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements from left half (if any)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from right half (if any)
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements from temp back to original array
    for (int k = 0; k <temp.size(); k++) {
        arr[k+st] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        // Recursively sort left and right halves
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, st, mid, end);
    }
}

int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    int n = arr.size();
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the array
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}