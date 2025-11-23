#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> freq(100001, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x] = 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        if (freq[x] == 1) cout << "YES";
        else cout << "NO";
    }

    return 0;
}
