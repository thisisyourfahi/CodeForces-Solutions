#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, s, m; cin >> n >> s >> m;
    int prev = 0;
    int ans = INT_MIN;
    while (n--) {
        int l, r; cin >> l >> r;
        int diff = l - prev;
        ans = max(ans, diff);
        prev = r;
    }
    ans = max(ans, (m - prev));
    (ans >= s) ? cout << "YES" << endl : cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
