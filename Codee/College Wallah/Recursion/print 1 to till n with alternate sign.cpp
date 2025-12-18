#include<bits/stdc++.h>
using namespace std;

int alternate_Sum(int n){
    if(n==0) return 0;
    return alternate_Sum (n-1) + ((n%2==0) ? -n : n);   // ternarry operator e carlibraces dewa hoice karon ternarry operator (?:) er theke plus(+) er precedence high
}


int main()
{
    int n;
    cin>>n;
    cout<<alternate_Sum(n);

    return 0;
}