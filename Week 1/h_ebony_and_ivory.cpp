#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c; cin >> a >> b >> c;
    for (int i = 0; i <= 10000; i++) {
        for (int j = 0; j <= 10000; j++) {
            if (a * i + b * j == c) {
                cout << "YES\n";
                return 0;
            } else if (a * i + b * j > c) {
                break;
            }
        }
    }
    cout << "NO\n";
}
