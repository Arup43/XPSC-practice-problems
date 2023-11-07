#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int diff = -1;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] != 0) {
            diff = abs(a[i] - b[i]);
        }
    }

    if (diff == -1) {
        cout << "YES\n";
        return;
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            flag = false;
            break;
        } else if (b[i] == 0) {
            if (a[i] - b[i] > diff) {
                flag = false;
                break;
            }
        } else if (a[i] - b[i] != diff) {
            flag = false;
            break;
        }
    }

    if (flag) {
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