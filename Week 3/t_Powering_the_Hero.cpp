#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    priority_queue<int> pq;
    vector<int> army;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > 0) {
            pq.push(x);
        } else {
            if (!pq.empty()) { 
                army.push_back(pq.top());
                pq.pop();
            }
        }
    }

    long long ans = 0;
    for (int x : army) {
        ans += x;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}