#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, r; cin >> n >> s >> r;
    int val = s - r;
    cout << val << " ";

    for (int i = 2; i <= n; i++) {
        while (r - val < n - i) {
            val--;
        }
        cout << val << " ";
        r -= val;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}