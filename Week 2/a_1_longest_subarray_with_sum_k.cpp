#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size();
    long long sum = 0;
    int i = 0, j = 0;
    int maxi = 0;
    while (j < n) {
        sum += a[j];

        while (sum > k) {
            sum -= a[i];
            i++;
        }
        
        if (sum == k) {
            maxi = max(maxi, j - i + 1);
        }
        
        j++;
    }
    return maxi;
}