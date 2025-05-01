#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n; cin >> n;
    int coins = 1;
    while(n > 3) {
        coins *= 2;
        n = n / 4;
    }
    cout << coins << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
