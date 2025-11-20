#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        vector<int> b(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        int odd_diff = 0;
        int even_diff = 0;

        for(int i=1; i<=n; i++){
            if(a[i] != b[i]){
                if(i%2 == 1) odd_diff++;
                else even_diff++;
            }
        }

        if(odd_diff > even_diff) cout << "Ajisai\n";
        else if(even_diff > odd_diff) cout << "Mai\n";
        else cout << "Tie\n";
    }
}
