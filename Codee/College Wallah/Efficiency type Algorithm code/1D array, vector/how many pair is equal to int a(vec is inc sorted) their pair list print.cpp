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
    bool found = false;
    set<pair<int, int>> pairing;    // vector use korle same jodi kono value(3, 3) thle eita 2 bar print korto tai set use koresi...
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if( (v[i]+v[j])  ==  target ){
                pairing.insert({v[i], v[j]}); // vectore hole push_back
                found = true;
            }
        }
    }
    if(found){
        cout<<"The unique pairs are: \n";
        for(auto &p : pairing){
            cout<< p.first<<", "<< p.second<<endl;
        }
    } else{
        cout<<"NO";
    }


    // for(int i=0; i<pairing.size(); i++){     // eivabe index print kore      jodi vector use kori thle
        //     cout<<pairing[i].first<<", "<<pairing[i].second<<endl;
        // }

    return 0;
}