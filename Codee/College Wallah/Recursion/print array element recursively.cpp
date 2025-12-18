#include<bits/stdc++.h>
using namespace std;

void recursive_Print(int arr[], int size){
    if(size==-1) return;
    recursive_Print(arr, size-1);
    cout<<arr[size]<<" ";
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    recursive_Print(arr, size-1);

    return 0;
}


// call index 0 to n-1
/*
void recursive_Print(int arr[], int index, int n) {
    if (index == n) return;
    cout << arr[index] << " ";
    recursive_Print(arr, index + 1, n);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    recursive_Print(arr, 0, n);
}

*/