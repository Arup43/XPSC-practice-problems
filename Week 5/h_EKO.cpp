#include<bits/stdc++.h>
using namespace std;

bool ok(vector<int> &heights, int H, int required) {
    long long total = 0;
    for (int h : heights) {
        if (h > H) {
            total += (h - H);
            if (total >= required) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> h(n);

    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        mx = max(mx, h[i]);
    }

    int l = 0, r = mx;
    int ans;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (ok(h, mid, m)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
}