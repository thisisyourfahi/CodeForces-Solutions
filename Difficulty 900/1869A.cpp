#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void bits(int n) {
    for(int i = 3; i >= 0; i--) {
        if ((n >> i) & 1) cout << 1;
        else cout << 0;
    }
    cout << '\n';
}

void solve() {
    int n; cin >> n;
    vi a(n);
    f(i, n) cin >> a[i];

    if (n & 1) {
        cout << 4 << '\n';
        cout << 1 << ' ' << n - 1 << '\n';
        cout << 1 << ' ' << n - 1 << '\n';
        cout << n - 1 << ' ' << n << '\n';
        cout << n - 1 << ' ' << n << '\n';
    } else {
        cout << 2 << '\n';
        cout << 1 << ' ' << n << '\n';
        cout << 1 << ' ' << n << '\n';
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
