#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1),prefix(n+1);
    for(int i=1; i<=n; i++) 
        cin>>a[i];

    prefix[0] = 0;
    for(int i=1; i<=n; i++)
        prefix[i] = prefix[i-1] + a[i];

    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        int ans = prefix[r] - prefix[l-1];
        cout<<ans<<endl;
    }

    return 0;
}