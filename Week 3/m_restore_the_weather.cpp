#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back({x, i});
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i].second] = b[i];
    }

    for (auto x : mp) {
        cout << x.second << " ";
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