#include<bits/stdc++.h>
using namespace std;

void solve() {
    string yes = "Yes";
    for (int i = 0; i < 100; i++) {
        yes += "Yes";
    }

    string s; cin >> s;
    if (yes.find(s) != string::npos) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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