#include<bits/stdc++.h>
using namespace std;

void max_Ele(int arr[], int x, int maxE){
    if(x==-1){
        cout<<maxE;
        return;
    }
    if(maxE<arr[x]) maxE = arr[x];
    max_Ele(arr, x-1, maxE);
    
}


int main()
{
    int arr[] = {5, 2, 6, 1, 9, 4, 20, 12,18};
    int size = sizeof(arr)/ sizeof(arr[0]);
    max_Ele(arr, size-1, arr[0]);

    return 0;
}