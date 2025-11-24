#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int A[r][c];
    int T[c][r];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            T[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
