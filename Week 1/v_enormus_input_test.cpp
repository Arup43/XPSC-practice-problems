#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; cin >> n >> k;
    int cnt = 0;
    while (n--) {
        int t; cin >> t;
        if (t % k == 0) cnt++;
    }
    cout << cnt << "\n";
}