#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int i = 0, j = 2;
  int cnt = 0;
  while (j < n) {
    if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C') {
      cnt++;
      i += 3; j+= 3;
    } else {
      i++; j++;
    }
  }
  cout << cnt << "\n";
}