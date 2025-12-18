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

// without recursion... calculate in main function...
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;

    while(y!=0){
        int r = x % y;
        x = y;
        y = r;
    }
    cout<<x;
}
*/