#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, r = 0, ans = INT_MIN;
    while (r < n) {
        if (s[l] == s[r]) {
            ans = max(ans, (r - l + 1));
        } else {
            l = r;
        }
        r++;
    }
    cout << ans + 1 << '\n';
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
