#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    set<string> s;
    stack<string> st;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        st.push(str);
    }

    while (!st.empty()) {
        if (s.find(st.top()) == s.end()) {
            string tmp = st.top();
            int sz = tmp.size();
            s.insert(tmp);
            cout << tmp[sz - 2] << tmp[sz - 1];
        }
        st.pop();
    }
}