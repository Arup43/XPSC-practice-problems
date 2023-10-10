#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        long long sum = 0;
        int mx = 0;
        map<long long, int> mp;
        for (int i = 0; i < N; i++) {
            sum += A[i];
            
            if (sum == K) {
                mx = max(mx, i + 1);
            } else {
                if (mp.find(sum - K) != mp.end()) {
                    mx = max(mx, i - mp[sum - K]);
                }
            }
            
            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }
        return mx;
    } 
};