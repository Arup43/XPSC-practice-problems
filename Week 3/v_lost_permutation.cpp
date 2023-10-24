#include<bits/stdc++.h>
using namespace std;

void solve() {
    int m, s; cin >> m >> s;
    vector<bool> freq(100, false);
    int maxi = INT_MIN;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        freq[x] = true;
        maxi = max(maxi, x);
    }

    int i = 1;
    for (; ; i++) {
        if (!freq[i]) {
            if (s >= i) {
                s -= i;
                if (s == 0) {
                    break;
                }
            } else {
                break;
            }
        }
    }

    if (s > 0) {
        cout << "NO\n";
    } else {
        while (++i <= maxi) {
            if (!freq[i]) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
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