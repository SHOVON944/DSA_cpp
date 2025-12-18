/*
#include<bits/stdc++.h>
using namespace std;

void palindrome(int a, int store, int reserve, int power){
    if(a==0){
        if(store==reserve) cout<<"YES, Palindrome...";
        else cout<<"No, not palindrome...";
        return;
    }
    store = (store * 10) + a%10;
    palindrome(a/10, store, reserve, power+1);
}


int main()
{
    int a;
    cin>>a;
    palindrome(a, 0, a, 0);

    return 0;
}
*/

// Standard type...
#include <bits/stdc++.h>
using namespace std;

bool isPalindromeHelper(int num, int &temp){
    if (num == 0) return true;
    bool result = isPalindromeHelper(num / 10, temp);
    if (!result) return false;
    if (num % 10 == temp % 10) {
        temp /= 10;
        return true;
    }
    return false;
}

bool isPalindrome(int num){
    if (num < 0) return false;
    int temp = num;
    return isPalindromeHelper(num, temp);
}

int main()
{
    int num = 13431;
    cout << isPalindrome(num);
    return 0;
}
