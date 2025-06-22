#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    int l = n - k, r = n;
    int odd_up_r = (r + 1) / 2;
    int odd_up_l = (l + 1) / 2;
    int odds = odd_up_r - odd_up_l;
    cout << ((odds % 2) ? "NO" : "YES") << '\n';
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
