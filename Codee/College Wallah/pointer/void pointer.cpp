#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x = 29.3;
    void *ptr;
    ptr = &x;
    cout<<ptr<<endl;

    
    cout<<  *(float*)ptr<<endl;




    return 0;
}