#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    // int x, y, k; cin >> x >> y >> k;
    // int a = ceil((float) x / k);
    // int b = ceil((float) y / k);
    // if (b >= a) cout << b * 2 << '\n';
    // else cout << (a * 2) - 1 << '\n';
    int x, y, k;
    cin >> x >> y >> k;

    x = (x + k - 1) / k;
    y = (y + k - 1) / k;

    if (y >= x)
        cout << y * 2 << '\n';
    else
        cout << (x * 2) - 1 << '\n';
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
