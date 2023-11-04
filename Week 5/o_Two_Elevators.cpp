#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    int first = abs(a - 1);
    int second = abs(b - c) + abs (c - 1);

    if (first < second) {
        cout << 1 << "\n";
    } else if (second < first) {
        cout << 2 << "\n";
    } else {
        cout << 3 << "\n";
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