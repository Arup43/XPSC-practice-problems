#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> chessboard(n, vector<int> (m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> chessboard[i][j];
            }
        }

        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int cur = chessboard[i][j];

                int c1 = j - 1, c2 = j + 1;
                for (int r = i - 1; r >= 0; r--) {
                    if (c1 >= 0) {
                        cur += chessboard[r][c1];
                        c1--;
                    }
                    if (c2 < m) {
                        cur += chessboard[r][c2];
                        c2++;
                    }
                }

                c1 = j - 1; c2 = j + 1;
                for (int r = i + 1; r < n; r++) {
                    if (c1 >= 0) {
                        cur += chessboard[r][c1];
                        c1--;
                    }
                    if (c2 < m) {
                        cur += chessboard[r][c2];
                        c2++;
                    }
                }

                maxi = max(maxi, cur);
            }
        }
        cout << maxi << "\n";
    }
}