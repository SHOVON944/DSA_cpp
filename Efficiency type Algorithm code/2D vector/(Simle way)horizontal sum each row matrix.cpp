#include<bits/stdc++.h>
using namespace std;

void horizontalSum(vector<vector<int>> &matrix, int n, int m){

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += matrix[i][j];
        }
        cout<< i+1 <<" row sum is: "<< sum <<endl;
    }
}


int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    horizontalSum(matrix, n, m);

    return 0;
}