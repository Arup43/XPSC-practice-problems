#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    queue<int> q;
    int i = 0, j = 0;
    vector<long long> ans;
    
    while (j < N) {
        if (A[j] < 0) {
            q.push(A[j]);
        }
        
        if (j >= K - 1) {
            if (q.empty()) {
                ans.push_back(0);
            } else {
                ans.push_back(q.front());
            }
            
            if (A[i] < 0) {
                q.pop();
            }
            i++;
        }
        
        j++;
    }
    
    return ans;
}