#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> s(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        mp[s[i]] = true;
    }

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 1; j < s[i].size(); j++) {
            string prefix = s[i].substr(0, j);
            string suffix = s[i].substr(j, s[i].size() - j);
            if (mp[prefix] and mp[suffix]) {
                found = true;
                break;
            }
        }
        cout << found;
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