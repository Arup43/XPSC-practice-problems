#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++) {
        st.insert(s.substr(i, 2));
    }
    cout << st.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}