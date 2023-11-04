#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '0') {
            ans += (s[i] - '0') + 'a' - 1;
        } else {
            ans += stoi(s.substr(i - 2, 2)) + 'a' - 1;
            i -= 2;
        }
    }

    reverse(ans.begin(), ans.end());

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