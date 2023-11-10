#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    int l = mn, r = mx;
    bool ans = false;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        double res = 1.0;
        for (int x : a) {
            res *= ((x * 1.0) / mid);
        }

        if (fabs(res - 1.0) < 1e-15) {
            ans = true;
            break;
        } else if (res < 1.0) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (ans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}