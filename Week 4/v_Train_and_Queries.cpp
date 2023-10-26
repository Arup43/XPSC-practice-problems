#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    map<int, int> first_idx, last_idx;
    for (int i = 1; i <= n; i++) {
        if (!first_idx[arr[i]]) {
            first_idx[arr[i]] = i;
        }
        last_idx[arr[i]] = i;
    }

    while (q--) {
        int a, b; cin >> a >> b;
        if (!first_idx[a] or !first_idx[b]) {
            cout << "NO\n";
        } else {
            if (first_idx[a] < last_idx[b]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
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