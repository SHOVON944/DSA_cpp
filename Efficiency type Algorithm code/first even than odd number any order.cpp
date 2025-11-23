#include<bits/stdc++.h>
using namespace std;

void changing_even_than_odd(vector<int> &v){
    int lt = 0;
    int rt = v.size() - 1;

    while(lt<rt){
        if(v[lt]%2!=0  &&  v[rt]%2==0){
            swap(v[lt], v[rt]);
            lt++;
            rt--;
        }
        if(v[lt]%2==0) lt++;
        if(v[rt]%2!=0) rt--;
    }
}


int main()
{
    vector<int> vec{1, 10, 4, 6, 3, 5, 8, 9, 7};
    changing_even_than_odd(vec);
    for(int i : vec) cout<<i<<" ";

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 10, 4, 6, 3, 5, 8, 9, 7};
    vector<int> even, odd;

    int size = sizeof(arr)/ sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if(arr[i]%2==0) even.push_back(arr[i]);
        else odd.push_back(arr[i]);
    }
    even.insert(even.end(), odd.begin(), odd.end());
    for(int i : even) cout<<i<<" ";

    return 0;
}

*/