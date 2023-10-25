#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 3) {
        cout << -1 << "\n";
        return;
    }

    int num = n;
    for (int i = 1; i <= n / 2; i++) {
        cout << num << " ";
        num--;
    }
    num = 1;
    for (int i = n / 2 + 1; i <= n; i++) {
        cout << num << " ";
        num++;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}