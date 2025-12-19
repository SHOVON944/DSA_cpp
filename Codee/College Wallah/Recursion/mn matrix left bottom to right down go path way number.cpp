#include <bits/stdc++.h>
using namespace std;

int count_Paths(int i, int j, int m, int n){
    if( (i==m-1)  &&  (j==n-1)) return 1;
    if( (i>=m)  ||  (j>=n)) return 0;
    return count_Paths(i+1, j, m, n) + count_Paths(i, j+1, m, n);
           // go down                  // go right
}

int main()
{
    int m, n;
    cin>>m>>n;
    int way = count_Paths(0, 0, m, n);
    cout<<way;

    return 0;
}
