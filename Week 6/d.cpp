#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < i) {
            cout << -1 << "\n";
            return;
        }
        for (int j = i - 1; j >= 0; j--) {
            while (arr[j] >= arr[i]) {
                cnt++;
                arr[j] /= 2;
            } 
        }
    }

    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}