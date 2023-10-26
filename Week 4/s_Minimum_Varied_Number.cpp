#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int cur = 9;
    string s = "";
    while (n) {
        s += to_string(min(cur, n));
        n -= min(cur, n);
        cur--;
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}