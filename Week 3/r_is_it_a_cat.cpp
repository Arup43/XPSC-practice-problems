#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    string unique = "";
    unique += s[0];
    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i]) {
            unique += s[i];
        }
    }

    if (unique == "meow") {
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