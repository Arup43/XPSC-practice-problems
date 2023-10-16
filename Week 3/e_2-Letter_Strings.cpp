#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    map<string, int> mp;
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        string tmp1 = s[i], tmp2 = s[i];
        for (char c = 'a'; c <= 'k'; c++) {
            if (s[i][0] != c) {
                tmp1[0] = c;
                if (mp[tmp1]) {
                    cnt += mp[tmp1];
                }
            }
            if (s[i][1] != c) {
                tmp2[1] = c;
                if (mp[tmp2]) {
                    cnt += mp[tmp2];
                }
            }
        }
        mp[s[i]]++;
    }

    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}