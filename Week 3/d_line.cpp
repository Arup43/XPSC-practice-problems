#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            sum += i;
        } else {
            sum += (n - i - 1);
        }
    }

    int i = 0, k = 1;
    while (i < n / 2 and k <= n) {
        if (s[i] == 'L') {
            sum -= i;
            sum += (n - i - 1);
            k++;
            cout << sum << " ";
        }
        if (s[n - i - 1] == 'R') {
            sum -= i;
            sum += (n - i - 1);
            k++;
            cout << sum << " ";
        }
        i++;
    }

    while (k <= n) {
        cout << sum << " ";
        k++;
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