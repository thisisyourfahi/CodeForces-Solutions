#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.rbegin(), a.rend());
    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int key = prefix_sum[i], pos = i;
        mp[key] = i;
    }
    while (q--) {
        int x; cin >> x;
        auto it = mp.lower_bound(x);
        if (it == mp.end()) {
            cout << -1 << '\n';
        }
        else {
            int pos = it->second;
            cout << pos + 1 << '\n';
        }
    }
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
