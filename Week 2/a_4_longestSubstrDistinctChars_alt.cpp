#include <bits/stdc++.h>
using namespace std;

int longestSubstrDistinctChars (string S)
{
    // your code here
    int n = S.size();
    int mx = 1;
    int i = 0, j = 0;
    vector<int> freq(26, 0);
    bool is_distinct = true;
    
    while (j < n) {
        freq[S[j] - 'a']++;
        if (freq[S[j] - 'a'] > 1) {
            is_distinct = false;
        }
        
        while (!is_distinct) {
            freq[S[i] - 'a']--;
            if (freq[S[i] - 'a'] == 1) {
                is_distinct = true;
            }
            i++;
        }
        
        if (is_distinct) {
            mx = max(mx, j - i + 1);
        } 
        
        j++;
    }
    return mx;
}