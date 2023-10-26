#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> cnt;

bool is_leaf(int u, int p) {
    return g[u].size() == 1 and g[u][0] == p;
}

void dfs(int u, int p) {
    if (is_leaf(u, p)) {
        cnt[u] = 1;
        return;
    }

    for (int v : g[u]) {
        if (v != p) {
            dfs(v, u);
            cnt[u] += cnt[v];
        }
    }
}

void solve() {
    int n; cin >> n;
    g.assign(n + 1, vector<int> ());
    cnt.assign(n + 1, 0);

    for (int i = 1; i <= n - 1; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, -1);

    int q; cin >> q;
    while (q--) {
        int x, y; cin >> x >> y;
        cout << 1LL * cnt[x] * cnt[y] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}