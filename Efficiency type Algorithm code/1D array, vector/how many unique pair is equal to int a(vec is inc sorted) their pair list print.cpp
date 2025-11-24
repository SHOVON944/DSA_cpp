#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, -1, 0, 1, 3, 4, 6, 8, 11, 12};
    int t = 12;
    int n = 10;

    int i = 0;
    int j = n - 1;
    int answer = 0;
    set<pair<int, int>> store;

    while (i < j){
        if (arr[i] + arr[j] == t){
            store.insert({arr[i], arr[j]});
            answer++;
            i++;
            j--;
        } else if (arr[i] + arr[j] < t){
            i++;
        } else{
            j--;
        }
    }

    cout <<"The uniques pair is times:"<< answer<<endl;
    cout<<"The uniques pair list is: \n";
    for(auto &p : store){
        cout<< p.first<<", "<< p.second<<endl;
    }
    return 0;
}