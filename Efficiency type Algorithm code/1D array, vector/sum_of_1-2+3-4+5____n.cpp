#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2!=0) sum += i;
        else sum -= i;
    }
    cout<<sum;

    return 0;
}

/*
Efficiency code

    if (n % 2 == 0) result = -(n / 2);
    else result = (n + 1) / 2;

*/