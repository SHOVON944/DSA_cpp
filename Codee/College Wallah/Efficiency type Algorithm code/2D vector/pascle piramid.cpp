#include<iostream>
using namespace std;

int factorial(int x){

    if(x==0) return 1;      // x<=0
    return x * factorial(x-1);
}

int mathformula(int n, int r){
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++) {
        for(int k=i; k<n; k++) {
            cout << " ";
        }
        for(int j=0; j<=i; j++) {
            int ncr = mathformula(i, j);
            cout<<ncr<<" ";
        }
        cout << endl;
    }

    return 0;
}