#include<bits/stdc++.h>
using namespace std;

void multiple_with_k_for_k_time(int n, int k){
    if(k==0) return;
    multiple_with_k_for_k_time(n, k-1);
    int multiple = n*k;
    cout<<multiple<<" ";
}


int main()
{
    int n, k;
    cin>>n>>k;
    multiple_with_k_for_k_time(n, k);

    return 0;
}