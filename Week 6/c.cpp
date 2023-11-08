#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    bool okay_dog, okay_cat;
    if (a >= x) {
        okay_dog = true;
    } else {
        x -= a;
        if (c >= x) {
            okay_dog = true;
            c -= x;
        } else {
            okay_dog = false;
        }
    }

    if (b >= y) {
        okay_cat = true;
    } else {
        y -= b;
        if (c >= y) {
            okay_cat = true;
            c -= y;
        } else {
            okay_cat = false;
        }
    }

    if (okay_dog and okay_cat) {
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