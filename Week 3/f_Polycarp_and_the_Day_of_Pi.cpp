#include<bits/stdc++.h>
using namespace std;

void solve() {
    string pi = "314159265358979323846264338327";
    string s; cin >> s;
    int sz = s.size();
    int cnt = 0;
    for (int i = 0; i < sz; i++) {
        if (s[i] == pi[i]) cnt++;
        else break;
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