#include <bits/stdc++.h>
using namespace std;

bool ok(vector<int> &arr, int res, int strength) {
    for (int x : arr) {
        if (x > res) {
            strength -= x;
            if (strength <= 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--) {
	    int n, h; cin >> n >> h;
	    vector<int> arr(n);
	    
        int mx = INT_MIN;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
            mx = max(mx, arr[i]);
	    }
	    
	    int l = 0, r = mx;
	    int ans;
	    while (l <= r) {
	        int mid = l + (r - l) / 2;
	        if (ok(arr, mid, h)) {
	            ans = mid;
	            r = mid - 1;
	        } else {
	            l = mid + 1;
	        }
	    }
	    cout << ans << "\n";
	}
	return 0;
}
