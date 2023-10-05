#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int> pat_freq(26, 0);
	    for (char c : pat) {
	        pat_freq[c - 'a']++;
	    }
	    
	    int i = 0, j = 0, ans = 0;
	    vector<int> txt_freq(26, 0);
	    while (j < txt.size()) {
	        txt_freq[txt[j] - 'a']++;
	        if (j >= pat.size() - 1) {
	            if (pat_freq == txt_freq) ans++;
	            txt_freq[txt[i] - 'a']--;
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}
};