#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) 
        cin>>a[i];

    for(int i=1; i<n; i++)
        a[i] = a[i-1] + a[i];

    for(int i : a)
        cout<<i<<" ";

    return 0;
}