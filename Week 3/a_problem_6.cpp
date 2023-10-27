#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int XOR = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        XOR ^= x;
    }

    if (n & 1) {
        cout << XOR << "\n";
    } else {
        if (XOR == 0) {
            cout << 0 << "\n";
        } else {
            cout << -1 << "\n";
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