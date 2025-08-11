#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n, k; cin >> n >> k;
    vi a(n); f(i, n) cin >> a[i];

    sort(all(a));

    auto okay = [&](ll median) {
        ll op = 0;
        for (int i = n / 2; i < n; i++) {
            op += (a[i] < median ? median - a[i] : 0);
        }
        return op <= k;
    };
    
    ll mi = n / 2, l = a[mi], r = a[n - 1] + k, ans, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (okay(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
