#include <bits/stdc++.h>
using namespace std;

void subsequence_Print(int i, string &s, string curr) {
    if (i == s.size()) {
        if (!curr.empty())
            cout << curr << " ";
        return;
    }
    subsequence_Print(i + 1, s, curr);
    subsequence_Print(i + 1, s, curr + s[i]);
}

int main() {
    string s;
    cin >> s;
    subsequence_Print(0, s, "");
    return 0;
}