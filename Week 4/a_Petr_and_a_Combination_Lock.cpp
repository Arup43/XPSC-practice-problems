#include<bits/stdc++.h>
using namespace std;
 
const int N = 20;
int a[N];
 
bool solve(int idx, int cur) {
    if (idx == -1) {
        return (cur % 360) == 0;
    }
 
    bool clockwise = solve(idx - 1, cur + a[idx]);
    bool anti_clockwise = solve(idx - 1, cur - a[idx]);
 
    return clockwise or anti_clockwise;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    if (solve(n - 1, 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}