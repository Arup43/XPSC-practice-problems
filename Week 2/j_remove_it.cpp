#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x; cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        if (k != x) {
            cout << k << " ";
        }
    }
}