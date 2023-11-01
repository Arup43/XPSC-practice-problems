#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    vector<bool> freq(26, false);
    int distinct = 0;
    int days = 1;
    
    for (char c : s) {
        if (!freq[c - 'a']) {
            distinct++;
            freq[c - 'a'] = true;
            if (distinct > 3) {
                distinct = 1;
                days++;
                freq.assign(26, false);
                freq[c - 'a'] = true;
            }
        }
    }

    cout << days << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}