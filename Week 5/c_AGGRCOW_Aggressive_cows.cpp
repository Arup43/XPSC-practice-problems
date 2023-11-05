#include<bits/stdc++.h>
using namespace std;

bool ok(vector<int> &a, int c, int n, int diff) {
    int cnt = 1;
    int last = 0;
    for (int i = 1; i < n; i++) {
        if (abs(a[i] - a[last]) >= diff) {
            cnt++;
            last = i;
        }
    }

    return cnt >= c;
}

void solve() {
    int n, c; cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int l = 0, r = a[n - 1] - a[0];
    int ans;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(a, c, n, mid)) {
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