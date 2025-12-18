#include<bits/stdc++.h>
using namespace std;

void check_Armstrng(int num, int digit, int sum, int reserve){
    if(num==0){
        if(sum == reserve) cout<<"YES...";
        else cout<<"NO...";
        return;
    }
    int d = num%10;
    sum += (int)pow(d, digit);
    check_Armstrng(num/10, digit, sum, reserve);
}

int calculate_Digit(int num){
    int dgt = 0;
    while(num!=0){
        dgt++;
        num /= 10;
    }
    return dgt;
}

int main()
{
    int num;
    cin>>num;
    int digit = calculate_Digit(num);
    check_Armstrng(num, digit, 0, num);
}