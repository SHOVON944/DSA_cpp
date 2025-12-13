#include<iostream>
using namespace std;

int digittSum(int n){
    if(n>=0  &&  n<=9) return n;
    return digittSum(n/10) + (n%10);
}

int main()
{
    int n;
    cin>>n;
    int ans = digittSum(n);
    cout << ans << endl;
    
    return 0;
}