#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a, b, ans; cin >> a >> b;
    ans = (a ^ b);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
