#include<bits/stdc++.h>
using namespace std;

void solve() {
    string a, b; cin >> a >> b;
    if (a == b) {
        cout << "=\n";
    } else if (a.back() == b.back()) {
        if (a.back() == 'S') {
            if (a.size() > b.size()) {
                cout << "<\n";
            } else {
                cout << ">\n";
            }
        } else {
            if (a.size() > b.size()) {
                cout << ">\n";
            } else {
                cout << "<\n";
            }
        }
    } else {
        if ((a.back() == 'L' and b.back() == 'S') or (a.back() == 'L' and b.back() == 'M') or (a.back() == 'M' and b.back() == 'S')) {
            cout << ">\n";
        } else {
            cout << "<\n";
        }
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