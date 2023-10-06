#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mini = INT_MAX;
        vector<int> candy(n);
        for (int i = 0; i < n; i++) {
            cin >> candy[i];
            mini = min(mini, candy[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (candy[i] - mini);
        }
        cout << ans << "\n";
    }
}
