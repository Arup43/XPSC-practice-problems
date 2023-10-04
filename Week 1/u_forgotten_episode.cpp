#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> watched(n + 1, false);
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        watched[x] = true;
    }
    for (int i = 1; i <= n; i++) {
        if (!watched[i]) {
            cout << i << "\n";
            break;
        }
    }
}
