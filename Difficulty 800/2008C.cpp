#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    ll l, r; cin >> l >> r;
    vi a;
    ll i = 1;
    a.push_back(l);
    while (l + i <= r) {
        a.push_back(l + i);
        l = (l + i);
        i++;
    }
    // for (int i : a) cout << i << ' ';
    cout << a.size() << '\n';
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
