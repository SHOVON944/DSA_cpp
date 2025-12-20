#include <bits/stdc++.h>
using namespace std;

void subsequence_Print(int i, string &s, string subseq) {
    if (i == s.size()) {
        if (!subseq.empty())
            cout << subseq << " ";
        return;
    }
    subsequence_Print(i + 1, s, subseq);
    subsequence_Print(i + 1, s, subseq + s[i]);
}

int main()
{
    string s;
    cin >> s;
    subsequence_Print(0, s, "");
    return 0;
}