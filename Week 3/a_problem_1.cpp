#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    if ((n & (n - 1)) == 0) {
        cout << "NO\n";
    } else {
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