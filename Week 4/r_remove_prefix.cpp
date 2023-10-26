#include<bits/stdc++.h>
using namespace std;

const int mx = 2e5 + 9;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<bool> freq(n + 1, false);

    for (int i = n - 1; i >= 0; i--) {
        if (freq[arr[i]]) {
            cout << i + 1 << "\n";
            return;
        } else {
            freq[arr[i]] = true;
        }
    }

    cout << 0 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}