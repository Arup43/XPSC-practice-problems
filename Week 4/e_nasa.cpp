#include <bits/stdc++.h>
using namespace std;

vector<int> palindromes;

bool is_palindrome(int n) {
    string s = to_string(n);
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++; r--;
    }
    return true;
}

void gen_palindromes() {
    for (int i = 0; i < (1<<15); i++) {
        if (is_palindrome(i)) {
            palindromes.push_back(i);
        }
    }
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> freq(35000, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int p : palindromes) {
            if (freq[a[i] ^ p] > 0) {
                cnt += freq[a[i] ^ p];
            }
        }
        freq[a[i]]--;
    }
    cout << cnt << "\n";
}

int main() {
	// your code goes here
	gen_palindromes();
	
	int t; cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}
