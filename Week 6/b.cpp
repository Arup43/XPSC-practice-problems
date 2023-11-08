#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> s(n), f(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    cout << f[0] - s[0] << " ";
    for (int i = 1; i < n; i++) {
        if (s[i] < f[i - 1]) {
            cout << f[i] - f[i - 1] << " ";
        } else {
            cout << f[i] - s[i] << " ";
        }
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