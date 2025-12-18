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