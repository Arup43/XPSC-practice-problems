#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, H, M; cin >> n >> H >> M;
    int bed = H * 60 + M;
    vector<int> alarm(n);
    for (int i = 0; i < n; i++) {
        int h, m; cin >> h >> m;
        int t = h * 60 + m;
        alarm[i] = t;
    }
    sort(alarm.begin(), alarm.end());
    for (int i = 0; i < n; i++) {
        if (alarm[i] >= bed) {
            int sleep_h = (alarm[i] - bed) / 60;
            int sleep_m = (alarm[i] - bed) % 60;
            cout << sleep_h << " " << sleep_m << "\n";
            return;
        }
    }

    int sleep_h = ((1440 - bed) + alarm[0]) / 60;
    int sleep_m = ((1440 - bed) + alarm[0]) % 60;
    cout << sleep_h << " " << sleep_m << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}