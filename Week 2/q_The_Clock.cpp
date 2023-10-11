#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++; j--;
    }
    return true;
}

int time_to_min(int h, int m) {
    return h * 60 + m;
}

string min_to_time(int m) {
    int hr = m / 60;
    int min = m - (hr * 60);

    string hr_str = to_string(hr);
    string min_str = to_string(min);

    if (hr_str.size() == 1) {
        hr_str.insert(0, "0");
    }
    if (min_str.size() == 1) {
        min_str.insert(0, "0");
    }

    return hr_str + min_str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string start; cin >> start;
        int x; cin >> x;

        int h = stoi(start.substr(0, 2));
        int m = stoi(start.substr(3, 2));

        int cnt = 0;
        int time_cnt = 1440;
        int cur_min = time_to_min(h, m);

        set<int> st;
        while (time_cnt--) {
            if (is_palindrome(min_to_time(cur_min))) {
                st.insert(cur_min);
            }
            cur_min = (cur_min + x) % 1440;
        }

        cout << st.size() << "\n";
    }
}