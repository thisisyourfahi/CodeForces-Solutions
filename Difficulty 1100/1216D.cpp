#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = INT_MIN;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mp[a[i]] = i;
    }

    int ans = INT_MIN;
    for (int i = 1; i <= mx; i++) {
        for (int j= 1; j <= mx; j++) {
            if (__gcd(i, j) == 1) {
                if (mp.find(i) != mp.end() && mp.find(j) != mp.end()) {
                    ans = max(ans, (mp[i] + mp[j] + 2));
                }
            }
        }
    }
    (ans == INT_MIN) ? cout << -1 << '\n' : cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
