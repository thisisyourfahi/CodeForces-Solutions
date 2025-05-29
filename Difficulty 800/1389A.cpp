#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int l, r; cin >> l >> r;
    if (l * 2 <= r) {
        cout << l << " " << l * 2 << endl;
    }
    else {
        cout << -1 << " " << -1 << endl;
    }
    // int gcd = __gcd(l, r);
    // int lcm = (l / gcd) * r;
    // cout << gcd << " " << lcm << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
