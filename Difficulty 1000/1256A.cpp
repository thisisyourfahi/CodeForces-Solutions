#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    ll total_money = a * n + b;
    if(total_money >= s) {
        ll a_coins = s / n;
        a_coins = min(a_coins, a);
        ll remaining = s - (a_coins * n);
        if(remaining <= b) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
