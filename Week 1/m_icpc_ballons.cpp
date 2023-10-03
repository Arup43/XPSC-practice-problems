#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        int cnt = 0;
        vector<bool> freq(26, false);
        int n; cin >> n;
        string s; cin >> s;
        for (char c : s) {
            if (!freq[c - 'A']) {
                cnt++;
                freq[c - 'A'] = true;
            }
            cnt++;
        }
        cout << cnt << "\n";
    }
}