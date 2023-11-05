#include<bits/stdc++.h>
using namespace std;

bool ok(vector<int> &arr, int m, int cap) {
    int cnt = 1;
    int sum = 0;
    for (int x : arr) {
        if (sum + x > cap) {
            cnt++;
            sum = x;
        } else {
            sum += x;
        }
    }

    return cnt <= m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while (cin >> n >> m) {
        vector<int> arr(n);
        int mx = INT_MIN;
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mx = max(mx, arr[i]);
            total += arr[i];
        }

        int l = mx, r = total, ans;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (ok(arr, m, mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << "\n";
    }
}