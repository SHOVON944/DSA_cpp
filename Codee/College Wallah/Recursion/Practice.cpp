#include <iostream>
using namespace std;

void subsetSum(int index, int sum, int arr[], int n) {
    if (index == n) {
        cout << sum << " ";
        return;
    }

    // element না নেওয়া
    subsetSum(index + 1, sum, arr, n);

    // element নেওয়া
    subsetSum(index + 1, sum + arr[index], arr, n);
}

int main() {
    int arr[] = {2, 4, 5};
    int n = 3;

    subsetSum(0, 0, arr, n);

    return 0;
}
