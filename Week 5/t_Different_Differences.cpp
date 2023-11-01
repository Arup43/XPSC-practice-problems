#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int k, n; cin >> k >> n;
        vector<int> ans;
        int cur = 1;
        ans.push_back(cur);
        int inc = 1;
        k--;
        while (k) {
            if (n - (cur + inc) >= k - 1) {
                cur = cur + inc;
                ans.push_back(cur);
                inc++;
            } else {
                ans.push_back(++cur);
            }
            k--;
        }

        for (int a : ans) {
            cout << a << " ";
        }
        cout << "\n";
    }
}