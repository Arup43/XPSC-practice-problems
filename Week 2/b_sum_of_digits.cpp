#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    if (s.size() == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int sum = 0;
    for (char c : s) {
        sum += (int)(c - '0');
    }

    int cnt = 1;
    while (sum / 10 != 0) {
        int temp = sum;
        int new_sum = 0;
        while (temp) {
            new_sum += (temp % 10);
            temp = temp / 10;
        }
        sum = new_sum;
        cnt++;
    }
    cout << cnt << "\n";
}