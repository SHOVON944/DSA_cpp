#include <bits/stdc++.h>
using namespace std;

void subset_Print(int i, int sum, vector<int> &v, set<int> &ord){
    if(i==v.size()){
        ord.insert(sum);
        return;
    }
    subset_Print(i+1, sum, v, ord);  // without this value
    subset_Print(i+1, sum+v[i], v, ord);  // with this value
}

int main()
{
    int n;
    cin>>n;
    vector<int> num(n);
    set<int> ordered;
    for(int i=0; i<n; i++) cin>>num[i];
    subset_Print(0, 0, num, ordered);
    for(int i: ordered) cout<<i<<" ";
    return 0;
}
