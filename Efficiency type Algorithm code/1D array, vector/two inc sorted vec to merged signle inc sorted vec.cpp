#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6};
    int m = a.size();
    int n = b.size();
    // for(int i=0; i<m; i++)       for input a, b vector
    //     cin>>a[i];
    // for(int i=0; i<n; i++)
    //     cin>>b[i];

    vector<int> merged(m+n);
    int i = 0, j = 0, k = 0;
    while(i<m  &&  j<n){
        if(a[i] <= b[j]){
            merged[k] = a[i];   // for one line: merged[k++] = a[i++];
            i++;
            k++;
        } else{
            merged[k] = b[j];   // for one line: merged[k++] = b[j++];
            j++;
            k++;
        }
    }
    // ebar jdi kono vector er element sesh hoye jai tkn onno vector er element gula bose jabe
    while(i<m){
        merged[k] = a[i];   //// for one line: merged[k++] = a[i++];
        i++;
        k++;
    }
    while(j<n){
        merged[k] = b[j];   //// for one line: merged[k++] = b[j++];
        j++;
        k++;
    }

    for(int i : merged)
        cout<<i<<" ";

    return 0;
}