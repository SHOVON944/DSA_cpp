#include<iostream>
using namespace std;

int pwr(int p, int q){
    if(q==0) return 1;
    return p * pwr(p, q-1);
}

int main()
{
    int p, q;
    cin>>p>>q;
    int ans = pwr(p, q);
    cout << ans << endl;
    
    return 0;
}