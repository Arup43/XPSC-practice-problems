#include <bits/stdc++.h>
using namespace std;

bool is_distinct(vector<int> &freq) {
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 1) return false;
    }
    return true;
}

int longestSubstrDistinctChars (string S)
{
    // your code here
    int n = S.size();
    int mx = 1;
    int i = 0, j = 0;
    vector<int> freq(26, 0);
    
    while (j < n) {
        freq[S[j] - 'a']++;
        
        while (!is_distinct(freq)) {
            freq[S[i] - 'a']--;
            i++;
        }
        
        if (is_distinct(freq)) {
            mx = max(mx, j - i + 1);
        } 
        
        j++;
    }
    return mx;
}