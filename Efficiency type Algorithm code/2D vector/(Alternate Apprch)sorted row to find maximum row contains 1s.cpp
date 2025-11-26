#include<bits/stdc++.h>
using namespace std;

int leftMostOne(vector<vector<int>> &v){
    int left = -1;
    int maxsOneRow = -1;
    int j = v[0].size() - 1;
    // finding leftmost one in 0th row
    while(j>=0  &&  v[0][j]==1){
        left = j;
        maxsOneRow = 0;
        j--;
    }

    // check in rest of the rows if we can find a one left to the leftMostOne
    for(int i=1; i<v.size(); i++){
        while(j>=0  &&  v[i][j]==1){
            j--;
            maxsOneRow = i;
        }
    }
    return maxsOneRow;
}


int main()
{
    vector<vector<int>> arr= { {0, 0, 1, 1},     // arr dia korle obossoi size initialize er somoi bole dite hobe ...nhle error dei
                               {0, 0, 0, 1},
                               {1, 1, 1, 1}};

    int row = leftMostOne(arr);
    cout<<row;

    return 0;
}