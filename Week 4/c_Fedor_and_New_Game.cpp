#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;
    vector<int> army(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> army[i];
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        int diff = __builtin_popcount(army[i] ^ army[m]);
        if (diff <= k) cnt++;
    }

    cout << cnt << "\n";
}