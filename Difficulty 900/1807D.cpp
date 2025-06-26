#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, q; cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        ll x = pref[r] - (l == 0 ? 0 : pref[l - 1]);
        ll sum = pref[n - 1] - x + ((r - l + 1) * k);
         cout << (sum % 2 ? "YES" : "NO") << '\n';
    }
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
