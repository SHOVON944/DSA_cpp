#include<bits/stdc++.h>
using namespace std;


void rotateMatrix(vector<vector<int>> &v, int n){
    // transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(v[i][j], v[j][i]);
        }
    }
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // ---> [transpose]
    // 1 4 7
    // 2 5 8
    // 3 6 9
    // ---> [reverse]
    // 7 4 1
    // 8 5 2
    // 9 6 3

    // reverse every row
    for(int i=0; i<n; i++){
        reverse(v[i].begin(), v[i].end());
    }
}


int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
        }
    }

    rotateMatrix(vec, n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}