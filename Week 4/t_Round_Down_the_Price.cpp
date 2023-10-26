#include<bits/stdc++.h>
using namespace std;

int get_pow_of_10(int zeros) {
    int ans = 1;
    while (zeros--) {
        ans *= 10;
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    string s = to_string(n);
    int digits = s.size();
    cout << n - get_pow_of_10(digits - 1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}