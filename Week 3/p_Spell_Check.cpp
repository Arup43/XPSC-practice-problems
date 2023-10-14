#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    string s; cin >> s;
 
    if (n != 5) {
        cout << "NO\n";
        return;
    }
 
    string Timur = "Timur";
    sort(Timur.begin(), Timur.end());
 
    sort(s.begin(), s.end());
 
    if (Timur == s) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        solve();
    }
}