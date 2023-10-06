#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> freq(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        freq[x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (freq[i] >= 3) {
            cout << i << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}