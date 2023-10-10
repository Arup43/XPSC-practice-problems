#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> nums(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }

    vector<ll> unsorted(n + 1, 0), sorted(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        unsorted[i] = unsorted[i - 1] + nums[i];
    }

    sort(nums.begin(), nums.end());
    for (int i = 1; i <= n; i++) {
        sorted[i] = sorted[i - 1] + nums[i];
    }

    int q; cin >> q;
    while (q--) {
        int typ, l, r; cin >> typ >> l >> r;
        if (typ == 1) {
            cout << unsorted[r] - unsorted[l - 1] << "\n";
        } else {
            cout << sorted[r] - sorted[l - 1] << "\n";
        }
    }
}