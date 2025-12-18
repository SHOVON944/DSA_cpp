#include<bits/stdc++.h>
using namespace std;

void max_Ele(string s, int x, string store){
    if(x==s.size()){
        cout<<store;
        return;
    }
    if(s[x] != 'a') store += s[x];
    max_Ele(s, x+1, store);
}


int main()
{
    string s = "abcalieals";

    max_Ele(s, 0, "");

    return 0;
}