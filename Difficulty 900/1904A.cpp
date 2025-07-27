#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

vector<int> dx = {1, -1, -1, 1}, dy = {1, 1, -1, -1};

void solve() {
    ll a, b; cin >> a >> b;
    ll x_k, y_k; cin >> x_k >> y_k;
    ll x_q, y_q; cin >> x_q >> y_q;

    set<pair<int, int>> k_hits, q_hits;
    for (int i = 0; i < 4; i++) {
        k_hits.insert({x_k + dx[i] * a, y_k + dy[i] * b});
        k_hits.insert({x_k + dx[i] * b, y_k + dy[i] * a});

        q_hits.insert({x_q + dx[i] * a, y_q + dy[i] * b});
        q_hits.insert({x_q + dx[i] * b, y_q + dy[i] * a});
    }

    int ans = 0;
    for (auto position : k_hits) {
        if (q_hits.find(position) != q_hits.end()) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
