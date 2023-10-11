#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b, int c) {
    return __gcd(a, __gcd(b, c));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k; cin >> k;
    int ans = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= k; c++) {
                ans += gcd(a, b, c);
            }
        }
    }
    cout << ans << "\n";
}