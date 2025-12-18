#include<bits/stdc++.h>
using namespace std;

void max_Ele(int arr[], int x, int sum){
    if(x==-1){
        cout<<sum;
        return;
    }
    sum += arr[x];
    max_Ele(arr, x-1, sum);
    
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    max_Ele(arr, size-1, 0);

    return 0;
}