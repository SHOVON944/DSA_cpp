#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr;
    {
        int x = 10;
        ptr = &x;
    }
    cout<<ptr<<endl;

    return 0;
}