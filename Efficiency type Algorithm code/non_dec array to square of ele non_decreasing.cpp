#include<bits/stdc++.h>
using namespace std;

void changing_even_than_odd(vector<int> &v){
    int lt = 0;
    int rt = v.size() - 1;
    int pos = v.size() - 1;
    vector<int> store_res(v.size());

    while(lt <= rt){
        if(abs(v[lt]) > abs(v[rt])){
            store_res[pos] = v[lt] * v[lt];
            lt++;
        } else{
            store_res[pos] = v[rt] * v[rt];
            rt--;
        }
        pos--;
    }
    v = store_res;
}


int main()
{
    vector<int> vec{-7, -3, 2, 3, 11};
    changing_even_than_odd(vec);
    for(int i : vec) cout<<i<<" ";

    return 0;
}