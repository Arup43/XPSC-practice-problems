#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    int cs = 0;
    while (cin >> n >> q) {
        if (n == 0 and q == 0) {
            break;
        }

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        cout << "CASE# " << ++cs << ":\n";

        while (q--) {
            int x; cin >> x;
            int l = 0, r = n - 1;
            int ans = -1;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (arr[mid] == x) {
                    ans = mid;
                    r = mid - 1;
                } else if (arr[mid] > x) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (ans == -1) {
                cout << x << " not found\n"; 
            } else {
                cout << x << " found at " << ans + 1 << "\n";
            }
        }
    }
}