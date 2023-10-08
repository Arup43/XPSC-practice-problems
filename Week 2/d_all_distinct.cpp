#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<bool> exists(1e4 + 9, false);
        int duplicate = 0;
        for (int i = 0; i < n; i++) {
            if (exists[a[i]]) {
                duplicate++;
            }
            exists[a[i]] = true;
        }
        
        if (duplicate & 1) {
            cout << n - (duplicate + 1) << "\n";
        } else {
            cout << n - duplicate << "\n";
        }
    }
}