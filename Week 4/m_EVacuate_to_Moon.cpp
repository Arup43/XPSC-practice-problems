#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, h; cin >> n >> m >> h;
    vector<int> cars(n), outlets(m);
    for (int i = 0; i < n; i++) {
        cin >> cars[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> outlets[i];
    }

    sort(cars.begin(), cars.end(), greater<>());
    sort(outlets.begin(), outlets.end(), greater<>());

    long long maxi = 0;
    for (int i = 0; i < min(n, m); i++) {
        maxi += min<long long>(1LL * cars[i], 1LL * outlets[i] * h);
    }

    cout << maxi << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}