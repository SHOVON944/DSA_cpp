#include <bits/stdc++.h>
using namespace std;

int frog_Jump(vector<int> &v, int n, int i){
    if (i == n - 1) return 0;
    int cost1, cost2;
    if (i + 1 < n) cost1 = abs(v[i] - v[i + 1]) + frog_Jump(v, n, i + 1);
    if (i + 2 < n) cost2 = abs(v[i] - v[i + 2]) + frog_Jump(v, n, i + 2);
    return min(cost1, cost2);
}

int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
        cin >> height[i];
    cout << frog_Jump(height, n, 0) << endl;
}
