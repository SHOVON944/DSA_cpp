#include <bits/stdc++.h>
using namespace std;

// Mapping for digits to letters


void letterCombinations_Print(int i, string &digits, string current, string keypad[]) {
    if (i == digits.size()) {
        cout << current << " ";  // print the combination
        return;
    }

    int digit = digits[i] - '0';  // convert char to int
    string letters = keypad[digit];

    for (char ch : letters) {
        letterCombinations_Print(i + 1, digits, current + ch, keypad);  // recursive call
    }
}

int main() {
    string digits;
    cin >> digits;
    string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if (!digits.empty()) {
        letterCombinations_Print(0, digits, "", keypad);
    }

    return 0;
}
