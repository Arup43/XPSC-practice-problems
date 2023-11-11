#include<bits/stdc++.h>
using namespace std;

bool ok(vector<int> &a, int h, int mx) {
    long long total = 0;
    for (int x : a) {
        if (x < h) {
            total += (h - x);
            if (total > mx) {
                return false;
            }
        }
    }
    return true;
}

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    int l = mn, r = mx + 1e9;
    int ans;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(a, mid, x)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
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