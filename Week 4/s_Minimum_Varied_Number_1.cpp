#include<bits/stdc++.h>
using namespace std;

void solve(int n, int cur) {
    if (n <= 0) return;

    solve(n - cur, cur - 1);
    cout << min(cur, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n, 9);
        cout << "\n";
    }
}