#include <bits/stdc++.h>
using namespace std;

void subset_Print(int i, int sum, vector<int> &v){
    if(i==v.size()){
        cout<<sum<<" ";
        return;
    }
    subset_Print(i+1, sum, v);  // without this value
    subset_Print(i+1, sum+v[i], v);  // with this value
}

int main()
{
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0; i<n; i++) cin>>num[i];
    subset_Print(0, 0, num);

    return 0;
}
