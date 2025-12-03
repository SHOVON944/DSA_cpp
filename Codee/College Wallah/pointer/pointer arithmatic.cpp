#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 20;
    int *ptr = &x;

    cout<<sizeof(x)<<endl;

    cout<<ptr<<endl;
    cout<<ptr-2<<endl;
    cout<<ptr+2<<endl;

    return 0;
}