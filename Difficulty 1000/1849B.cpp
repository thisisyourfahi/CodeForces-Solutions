#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n, k; cin >> n >> k;
    vi a(n);
    f(i, n) cin >> a[i];
    f(i, n) {
        a[i] %= k;
    }
    vi ans;
    map<int, vi> mp;
    f(i, n) {
        if (a[i]) {
            mp[a[i]].push_back(i + 1);
        } else {
            ans.push_back(i + 1);
        }
    }
    auto it = mp.rbegin();
    while (it != mp.rend()) {
        for (auto i : it->second) {
            ans.push_back(i);
        }
        ++it;
    }
    f(i, ans.size()) cout << ans[i] << ' ';
    cout << '\n';
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
