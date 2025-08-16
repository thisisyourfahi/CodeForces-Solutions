#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    vi a(n); f(i, n) cin >> a[i];

    sort(all(a));

    auto ok = [&] (int mid) {
        int cnt = 1, i = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] - a[i] > 2 * mid) {
                cnt++;
                i = j;
            }
        }
        return cnt <= 3;
    };

    int l = 0, r = 1e9, ans, mid;
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
