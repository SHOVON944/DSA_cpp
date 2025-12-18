#include<bits/stdc++.h>
using namespace std;

void printing(int n, int a){
    if(a>n) return;
    cout<<a<<" ";
    printing(n, a+1);
}


int main()
{
    int n;
    cin>>n;
    printing(n, 1);

    return 0;
}