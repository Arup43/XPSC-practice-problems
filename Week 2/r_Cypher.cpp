#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> present(n);
        for (int i = 0; i < n; i++) {
            cin >> present[i];
        }

        for (int i = 0; i < n; i++) {
            int mv_cnt; cin >> mv_cnt;
            string moves; cin >> moves;
            int U = 0, D = 0;
            for (char c : moves) {
                if (c == 'U') D++;
                else U++;
            }
            
            U %= 10;
            D %= 10;

            int final;

            final = (present[i] + U) % 10;
            if (final - D >= 0) final -= D;
            else final = (final - D) % 10 + 10;

            cout << final << " ";
        }
        cout << "\n";
    }
}