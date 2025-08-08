#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

bool cmp(pair<ll, ll> &x, pair<ll, ll> &y) {
    // sort on basis of the minimum second value
    // if two second values are same then sort according to highest first value
    if (x.second == y.second) return x.first > y.first;
    return x.second < y.second;
}

void solve() {
    ll n, p; cin >> n >> p;
    vector<pair<ll, ll>> a(n);
    f(i, n) {
        ll x; cin >> x;
        a[i].first = x;
    }
    f(i, n) {
        ll x; cin >> x;
        a[i].second = x;
    }

    sort(all(a), cmp);
    // f(i, n) cout << a[i].first << ' ' << a[i].second << '\n';

    ll cost = p, remaining = n - 1;
    f(i, n) {
        ll op1, op2;
        if (a[i].first > remaining) {
            op1 = remaining * a[i].second;
            op2 = remaining * p;
            remaining = 0;
        } else {
            op1 = a[i].first * a[i].second;
            op2 = a[i].first * p;
            remaining -= a[i].first;
        }
        cost += min(op1, op2);
        if (remaining == 0) break;
    }
    cout << cost << '\n';
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
