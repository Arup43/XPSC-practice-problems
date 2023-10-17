#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int mat[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
        
        if ((mat[0][0] < mat[0][1] and mat[1][0] > mat[1][1])
            or (mat[0][0] > mat[0][1] and mat[1][0] < mat[1][1])
            or (mat[0][0] < mat[1][0] and mat[0][1] > mat[1][1])
            or (mat[0][0] > mat[1][0] and mat[0][1] < mat[1][1])
        ) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}