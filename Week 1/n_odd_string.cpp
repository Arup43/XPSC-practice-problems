#include<bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int sz = s.size();
  for (int i = 0; i < sz; i += 2) {
    cout << s[i];
  }
  cout << "\n";
}