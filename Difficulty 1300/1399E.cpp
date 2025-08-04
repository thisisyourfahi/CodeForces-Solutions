#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    vi a(n);
    int mn = INT_MAX;
    f(i, n) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    int ans;
    f(i, n) {
        if (a[i] == mn) {
            ans = i;
            for (int j = i + 1; j < n - 1; j++) {
                if (a[j] > a[j + 1]) {
                    cout << - 1 << '\n';
                    return ;
                }
            }
            cout << ans << '\n';
            return ;
        }
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
