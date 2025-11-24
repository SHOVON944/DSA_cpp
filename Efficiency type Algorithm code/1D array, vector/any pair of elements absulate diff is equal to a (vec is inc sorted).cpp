#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];

    int target;
    cin>>target;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if( abs(v[i]-v[j])  ==  target ){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";

    return 0;
}