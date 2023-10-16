#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n][n - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> arr[i][j];
        }
    }

    int freq[101] = {0};
    int first_ele;
    for (int i = 0; i < n; i++) {
        freq[arr[i][0]]++;
        if (freq[arr[i][0]] > 1) {
            first_ele = arr[i][0];
            break;
        }
    }

    cout << first_ele << " ";
    for (int i = 0; i < n; i++) {
        if (arr[i][0] != first_ele) {
            for (int j = 0; j < n - 1; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
            return;
        }
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