#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s; cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = (s - x - y);
            if (0 <= z and z <= k) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}