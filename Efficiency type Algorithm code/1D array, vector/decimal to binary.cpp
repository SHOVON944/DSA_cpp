#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int increament = 0;     // jodi pow(_,__) use na kora jai thle power = 1;   increament er bodole power variable dhorlam
    while(n>0){
        int paritydigit = n % 2;
        sum += paritydigit * pow(10, increament);       // sum += paritydigit * power;
        n /= 2;                                         // power *= 10;
        increament++;
    }
    cout<<sum;

    return 0;
}