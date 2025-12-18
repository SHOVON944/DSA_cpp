#include<bits/stdc++.h>
using namespace std;

int gcd_cal(int x, int y){
    if(y==0) return x;
    gcd_cal(y, x%y);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd_cal(a, b);
}