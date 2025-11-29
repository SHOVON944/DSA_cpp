#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 0, 1, 0, 0, 0};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int zeros = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0) zeros++;
    }
    for(int i=0; i<zeros; i++) arr[i] = 0;
    for(int i=zeros; i<size; i++) arr[i] = 1;

    for(int i : arr) cout<<i<<" ";

    return 0;
}