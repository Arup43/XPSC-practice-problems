#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<string> strs(n);
        for (int i = 0; i < n; i++) {
            cin >> strs[i];
        }

        int min_dif = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int dif = 0;
                for (int k = 0; k < m; k++) {
                    dif += abs(strs[i][k] - strs[j][k]);
                }
                min_dif = min(min_dif, dif);
            }
        }
        cout << min_dif << "\n";
    }
}