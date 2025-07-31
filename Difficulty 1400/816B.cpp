#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n, k, q; cin >> n >> k >> q;
    int N = 2e5 + 5;
    vi temp(N), prefcnt(N);
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        temp[l]++;
        temp[r + 1]--;
    }
    for (int i = 1; i <= N; i++) temp[i] += temp[i - 1];
    
    for (int i = 0; i <= N; i++) prefcnt[i] = (temp[i] >= k);
    for (int i = 1; i <= N; i++) prefcnt[i] += prefcnt[i - 1];

    while (q--) {
        int l, r; cin >> l >> r;
        cout << prefcnt[r] - prefcnt[l - 1] << '\n';
    }
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
