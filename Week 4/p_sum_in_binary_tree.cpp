#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long sum = n;
    while (n) {
        sum += n / 2;
        n /= 2;
    }
    cout << sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}