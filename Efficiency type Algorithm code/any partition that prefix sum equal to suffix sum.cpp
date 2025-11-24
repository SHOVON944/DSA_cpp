#include<bits/stdc++.h>
using namespace std;

bool checking_Equal(vector<int> &v, int n){
    int total_sum = 0;
    for(int i=0; i<n; i++)
        total_sum += v[i];

    int prefix_sum = 0;
    int suffix_sum = 0;
    for(int i=0; i<n; i++){
        prefix_sum += v[i];
        suffix_sum = total_sum - prefix_sum;
        if(prefix_sum == suffix_sum)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];

    if(checking_Equal(v, n))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}