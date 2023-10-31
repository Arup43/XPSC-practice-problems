#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        
        int first = -1;
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid] < x) {
                first = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        int second = -1;
        l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid] > x) {
                second = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (first == -1) {
            cout << "X ";
        } else {
            cout << arr[first] << " ";
        }

        if (second == -1) {
            cout << "X\n";
        } else {
            cout << arr[second] << "\n";
        }
    }
}