#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    int second = 2, first = 3, third = 1;
    int rest = n - 6;
    int each = rest / 3;
    
    second += each;
    first += each;
    third += each;

    int extra = rest % 3;
    if (extra == 2) {
        second++;
        first++;
    } else if (extra == 1) {
        first++;
    }

    cout << second << " " << first << " " << third << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}