#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b; cin >> a >> b;
  int sum = 0;
  for (int i = 1; i <= 2; i++) {
    if (a >= b) {
      sum += a;
      a--;
    } else {
      sum += b;
      b--;
    }
  }
  cout << sum << "\n";
}