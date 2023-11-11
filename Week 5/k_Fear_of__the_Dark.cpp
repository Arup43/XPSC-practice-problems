#include<bits/stdc++.h>
using namespace std;

double dis(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

bool ok(int px, int py, int ax, int ay, int bx, int by, double rad) {
    if (dis(ax, ay, 0, 0) <= rad and dis(ax, ay, px, py) <= rad) {
        return true;
    } else if (dis(bx, by, 0, 0) <= rad and dis(bx, by, px, py) <= rad) {
        return true;
    } else if (dis(ax, ay, 0, 0) <= rad and dis(bx, by, px, py) <= rad and dis(ax, ay, bx, by) <= rad + rad) {
        return true;
    } else if (dis(bx, by, 0, 0) <= rad and dis(ax, ay, px, py) <= rad and dis(ax, ay, bx, by) <= rad + rad) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int px, py; cin >> px >> py;
    int ax, ay; cin >> ax >> ay;
    int bx, by; cin >> bx >> by;

    double l = 0.0, r = 1e4;
    double ans;
    while (fabs(r - l) > 1e-6) {
        double mid = l + (r - l) / 2;
        if (ok(px, py, ax, ay, bx, by, mid)) {
            ans = mid;
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << setprecision(8) << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}