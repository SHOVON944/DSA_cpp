#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int uniqueNum = 0;
    for (int i = 0; i < n; i++){
        uniqueNum ^= arr[i];
    }
    cout << "Unique number: " << uniqueNum << endl;

    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[1000] = {0};   // suppose value are in between 0-999

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            cout << "Unique number: " << arr[i];
            break;
        }
    }

    return 0;
}



*/