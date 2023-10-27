#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int cnt = 0;
    while (n > 1) {
        n >>= 1;
        cnt++;
    }
    cout << (1 << cnt) - 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}