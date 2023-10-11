#include<bits/stdc++.h>
using namespace std;

bool is_distinct(string s) {
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while (!is_distinct(to_string(++n)));
    cout << n << "\n";
}