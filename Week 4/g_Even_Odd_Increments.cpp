#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long sum = 0;
    for (int x : a) {
        if (x & 1) {
            odd++;
        } else {
            even++;
        }
        sum += x;
    }

    while (q--) {
        int typ, val; cin >> typ >> val;
        if (typ == 0) {
            sum += (even * val);
            if (val & 1) {
                odd += even;
                even = 0;
            }
        } else {
            sum += (odd * val);
            if (val & 1) {
                even += odd;
                odd = 0;
            }
        }

        cout << sum << "\n";
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