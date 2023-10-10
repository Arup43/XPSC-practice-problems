#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        // your code here
        int n = s.size();
        int i = 0, j = 0;
        int unique = 0;
        vector<int> freq(26, 0);
        int mx = -1;
        
        while (j < n) {
            freq[s[j] - 'a']++;
            if (freq[s[j] - 'a'] == 1) {
                unique++;
            }
            
            while (unique > k) {
                freq[s[i] - 'a']--;
                if (freq[s[i] - 'a'] == 0) {
                    unique--;
                }
                i++;
            }
            
            if (unique == k) {
                mx = max(mx, j - i + 1);
            }
            
            j++;
        }
        return mx;
    }
};