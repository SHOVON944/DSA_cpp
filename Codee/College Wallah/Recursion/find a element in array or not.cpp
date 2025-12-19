#include <bits/stdc++.h>
using namespace std;

bool found_Elements(vector<int> &v, int n, int i, int x){
    if (i == n) return false;
    if(v[i]==x) return true;
    return found_Elements(v, n, i+1, x);
}

int main(){
    int n;
    cin >> n;
    vector<int> ele(n);
    for (int i = 0; i < n; i++) cin >> ele[i];
    int x;
    cin>>x;
    found_Elements(ele, n, 0, x);
    if(found_Elements) cout<<"YES...";
    else cout<<"NO...";
}
