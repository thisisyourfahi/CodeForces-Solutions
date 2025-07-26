#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    ll n, k, x; cin >> n >> k >> x;
    ll sum_up_to_n = (n * (n + 1)) / 2;
    ll mn = (k * (k + 1)) / 2;
    ll e = n - k;
    ll sum_up_to_e = (e * (e + 1)) / 2;
    ll mx = sum_up_to_n - sum_up_to_e;
    // cout << "Max = " << mx << " Min = " << mn << '\n';
    if (x >= mn && x <= mx) cout << "YES\n";
    else cout << "NO\n";
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
