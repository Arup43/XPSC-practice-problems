#include<bits/stdc++.h>
using namespace std;

void solve() {
    char chessboard[9][9];
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> chessboard[i][j];
        }
    }

    for (int i = 2; i <= 7; i++) {
        for (int j = 2; j <= 7; j++) {
            if (chessboard[i][j] == '#') {
                if (chessboard[i - 1][j - 1] == '#' and chessboard[i - 1][j + 1] and chessboard[i + 1][j - 1] == '#' and chessboard[i + 1][j + 1] == '#') {
                    cout << i << " " << j << "\n";
                    return;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}