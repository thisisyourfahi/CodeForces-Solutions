#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    bool divisible = false;
    f(i, n) {
        cin >> a[i];
        if (a[i] % k == 0) divisible = true;
    }

    if (divisible) cout << 0 << '\n';
    else {
        int ans = k - 1, cnt = 0;
        f(i, n) {
            if (a[i] % 2 == 0) cnt++;
            ans = min(ans, (k - (a[i] % k)));
        }
        if (k == 4) {
            if (cnt > 1) ans = 0;
            else ans = min(ans, (2 - cnt));
        } 
        cout << ans << '\n';
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
