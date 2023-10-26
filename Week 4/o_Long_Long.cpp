#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long sum = 0;
    int op = 0;
    bool neg = false;
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i]);
        if (arr[i] < 0) {
            if (neg) {

            } else {
                op++;
                neg = true;
            }
        } else if (arr[i] > 0) {
            if (neg) {
                neg = false;
            } else {

            }
        }
    }

    cout << sum << " " << op << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}