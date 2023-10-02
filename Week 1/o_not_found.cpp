#include<bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  vector<bool> exists(26, false);
  for (char c : s) {
    exists[c - 'a'] = true;
  }
  for (int i = 0; i < 26; i++) {
    if (!exists[i]) {
      cout << (char) (i + 'a') << "\n";
      return 0;
    }
  }
  cout << "None\n";
}