#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        unordered_set<string> p1, p2, p3;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            p1.insert(s);
        }
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            p2.insert(s);
        }
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            p3.insert(s);
        }
        
        int point1 = 0, point2 = 0, point3 = 0;
        for (string s : p1) {
            if (p2.find(s) == p2.end() and p3.find(s) == p3.end()) {
                point1 += 3;
            } else if (p2.find(s) == p2.end() or p3.find(s) == p3.end()) {
                point1++;
            }
        }
        for (string s : p2) {
            if (p1.find(s) == p1.end() and p3.find(s) == p3.end()) {
                point2 += 3;
            } else if (p1.find(s) == p1.end() or p3.find(s) == p3.end()) {
                point2++;
            }
        }
        for (string s : p3) {
            if (p2.find(s) == p2.end() and p1.find(s) == p1.end()) {
                point3 += 3;
            } else if (p2.find(s) == p2.end() or p1.find(s) == p1.end()) {
                point3++;
            }
        }
        cout << point1 << " " << point2 << " " << point3 << "\n";
    }
}