#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        int op = 0, idx = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i] > idx) {
                op += (a[i] - idx);
                idx = a[i];
            }
            idx++;
        }
        cout << op << "\n";
    }
}