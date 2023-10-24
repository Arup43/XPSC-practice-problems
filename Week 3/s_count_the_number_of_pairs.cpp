#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> upper(26, 0), lower(26, 0);
    for (int c : s) {
        if (islower(c)) {
            lower[c - 'a']++;
        } else {
            upper[c - 'A']++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        cnt += min(lower[i], upper[i]);
        if (k > 0) {
            int extra = abs(lower[i] - upper[i]);
            int mini = min(k, extra / 2);
            cnt += mini;
            k -= mini;
        }
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