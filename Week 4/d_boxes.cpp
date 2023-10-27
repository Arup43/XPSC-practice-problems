#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), greater<>());
    
    int ans = 1;
    ll Xor = a[0];
    int i = 1, j = n - 1;
    while (i <= j) {
        if (Xor >= a[j]) {
            Xor ^= a[j];
            j--;
        } else {
            ans++;
            Xor = a[i];
            i++;
        }
    }
    cout << ans << "\n";
}

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}
