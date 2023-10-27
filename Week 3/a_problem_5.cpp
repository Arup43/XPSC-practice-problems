#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    int ans = 1;
    for (int i = 1; i <= k; i++) {
        ans = (1LL * ans * n) % mod;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}