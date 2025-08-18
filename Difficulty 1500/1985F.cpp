#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int h, n; cin >> h >> n;
    vector<int> a(n), b(n);
    ll total_dmg = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_dmg += a[i];
    }
    for (int i = 0; i < n; i++) cin >> b[i];

    auto ok = [&] (ll turn) {
        ll dmg = total_dmg;
        turn -= 1;
        for (int i = 0; i < n; i++) {
            dmg += a[i] * (turn / b[i]);
            if (dmg >= h) return true;
        }
        return false;
    };

    ll l = 1, r = 1e11, mid, ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
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
