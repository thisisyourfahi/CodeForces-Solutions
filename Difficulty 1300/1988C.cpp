#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n; cin >> n;
    int msb = __lg(n);

    vector<ll> ans;
    for (int i = 0; i <= msb; i++) {
        if ((n >> i) & 1) {
            ll x = n - (1ll << i);
            if (x > 0) ans.push_back(x);
        }
    }
    reverse(ans.begin(), ans.end());
    ans.push_back(n);
    cout << ans.size() << endl;
    for (ll i : ans) cout << i << " ";
    cout << endl;
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
