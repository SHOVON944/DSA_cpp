#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int increament = 0;
    while(n>0){
        int mod = n%10;
        sum += mod * pow(2, increament);
        n /= 10;
        increament++;
    }

    cout<<sum;

    return 0;
}