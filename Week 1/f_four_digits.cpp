#include<bits/stdc++.h>
using namespace std;

int main() {
  string str; cin >> str;
  string zeros = "";
  int sz = str.size();
  int zero_cnt = 4 - sz;
  while (zero_cnt--) {
    zeros += '0';
  }
  str.insert(0, zeros);
  cout << str << "\n";
}