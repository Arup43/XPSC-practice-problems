#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    long long sum = 0;
    int odd = 0;
    int min_odd = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
        if (x & 1) {
            odd++;
            min_odd = min(min_odd, x);
        }
    }
    if (odd & 1) sum -= min_odd;
    cout << sum << "\n";
}
