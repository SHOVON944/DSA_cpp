#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(6); // Vector of size 6
    
    // Input values into the vector
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    cout << "Enter x: ";
    int x;
    cin >> x;

    int occurrence = -1; // Correct variable name and initialization
    
    // Search for the occurrence of x in the vector
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            occurrence = i;
            break; // Break on first occurrence to optimize
        }
    }

    cout << "The occurrence of the value is: " << occurrence;
    return 0;
}
