#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll gcd1 = a[0];
    for (int i = 2; i < n; i += 2) gcd1 = __gcd(gcd1, a[i]);
    //cout << gcd1 << endl; 
    ll gcd2 = a[1];
    for (int i = 3; i < n; i += 2) gcd2 = __gcd(gcd2, a[i]);
    //cout << gcd2 << endl;

    if (gcd1 == gcd2) {
        cout << 0 << endl;
        return ;
    }
    
    ll ans = 0;
    bool okay = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % gcd1 == 0) {
            okay = false;
            break;
        }
    }
    if (okay) {
        ans = gcd1;
    }
    else {
        okay = true;
        for (int i = 0; i < n; i+= 2) {
            if (a[i] % gcd2 == 0) {
                okay = false;
                break;
            }
        }
        if (okay) {
            ans = gcd2;
        }
    }
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
