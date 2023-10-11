#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> nums(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        mx = max(mx, nums[i]);
    }

    int gcd_ness = INT_MIN;
    int ans = -1;

    for (int i = 2; i <= mx; i++) {
        int cur = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] % i == 0) cur++;
        }
        if (cur > gcd_ness) {
            gcd_ness = cur;
            ans = i;
        }
    }

    cout << ans << "\n";
}