#include<bits/stdc++.h>
using namespace std;

bool prime[3004];

bool is_prime(int n) {
    if (n == 1) return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_almost_prime(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (prime[i]) {
                cnt++;
            }
        }
    }
    return cnt == 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_prime(i)) {
            prime[i] = true;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (is_almost_prime(i)) {
            cnt++;
        }
    }
    cout << cnt << "\n";
}