#include<bits/stdc++.h>
using namespace std;

bool ok(vector<int> &a, int n, int diff) {
    int cnt = 1;
    int l = 0, r = 1;
    while (r < n) {
        if (a[r] <= 0LL + a[l] + diff + diff) {
            r++;
        } else {
            cnt++;
            l = r;
            r = l + 1;
        }
    }
    return cnt <= 3;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int l = 0, r = 1e9;
    int ans;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(a, n, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
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