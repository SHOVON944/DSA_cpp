#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4] = { {0, 1, 1, 1},     // arr dia korle obossoi size initialize er somoi bole dite hobe ...nhle error dei
                      {0, 0, 0, 1},
                      {0, 0, 0, 1}};

    int max = -1;
    int left = 4;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]==1){
                if(left>j){
                    max = i;
                    left = j;
                }
                break;
            }
        }
    }
    cout<<max;

    return 0;
}