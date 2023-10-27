#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int cnt_leading_zeros = __builtin_clz(n);
    int msb = 31 - cnt_leading_zeros;
    cout << (1 << msb) - 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}