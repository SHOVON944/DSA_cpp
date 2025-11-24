#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    k = k % n;
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    cout << "After rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/*

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k = 0;
    k = k * v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for(int a : v) {
        cout << a << " ";
    }

    return 0;
}



*/