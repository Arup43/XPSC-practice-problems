#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i = 0, j = 0;
        long sum = 0;
        long max_sum = INT_MIN;
        while (j < N) {
            sum += Arr[j];
            if (j >= K - 1) {
                max_sum = max(max_sum, sum);
                sum -= Arr[i];
                i++;
            }
            j++;
        }
        return max_sum;
    }
};