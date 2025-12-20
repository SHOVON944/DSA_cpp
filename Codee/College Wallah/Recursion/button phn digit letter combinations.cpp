#include<bits/stdc++.h>
using namespace std;

void letter_Combinations(int i, string &digits, string s, string keypad[]){
    if(i==digits.size()){
        cout<<s<<" ";
        return;
    }
    int dgt = digits[i] - '0';  // convert char to int
    string letters = keypad[dgt];
    for(char ch: letters){
        letter_Combinations(i+1, digits, s+ch, keypad);
    }
}


int main()
{
    string digits;
    cin>>digits;
    string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    letter_Combinations(0, digits, "", keypad);

    return 0;
}