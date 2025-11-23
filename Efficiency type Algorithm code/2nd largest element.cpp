#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 1, 2, 4, 0, 6};
    int max_s = INT_MIN;
    int max_f = INT_MIN;
    for(int i=0; i<6; i++){
        if(max_f<arr[i]){
            max_s = max_f;
            max_f = arr[i];
        }
    }

    cout<<max_s;


    return 0;
}