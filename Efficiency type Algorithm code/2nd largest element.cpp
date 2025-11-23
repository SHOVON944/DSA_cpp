#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 1, 6, 4, 8, 6};
    int n = 6;

    int max_f = INT_MIN;
    int max_s = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > max_f){
            max_s = max_f;
            max_f = arr[i];
        }
        else if(arr[i] > max_s){
            max_s = arr[i];
        }
    }

    cout << "2nd largest = " << max_s;
    return 0;
}
