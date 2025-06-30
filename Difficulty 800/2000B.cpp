#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    vi a(n);
    f(i, n) cin >> a[i];

    vector<bool> b(n, false);
    b[a[0] - 1] = true;
    bool rules_followed = true;
    for (int i = 1; i < n; i++) {
        int k = a[i] - 1;
        bool left = b[(k > 0 ? k - 1 : 0)];
        bool right = (k + 1 < n) && b[k + 1];
        if (left || right) {
            b[k] = true;
        } else {
            rules_followed = false;
            break;
        }
    }
    cout << (rules_followed ? "YES" : "NO") << '\n';
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
