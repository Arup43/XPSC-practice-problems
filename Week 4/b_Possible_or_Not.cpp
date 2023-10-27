#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, b; cin >> n >> b;
    int AND = -1;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if ((x & b) == b) {
            AND &= x;
        }
    }
    
    if (AND == b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}
