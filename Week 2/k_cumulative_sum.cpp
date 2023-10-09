#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<ll> pre_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pre_sum[i] = pre_sum[i - 1] + arr[i];
    }

    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;
        cout << pre_sum[r + 1] - pre_sum[l] << "\n";
    }
}