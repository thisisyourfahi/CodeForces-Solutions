#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, m, k; 
    cin >> n >> m >> k;
    set<int> x, y;
    vector<int> a(n), b(m), c(k + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= k) {
            x.insert(a[i]);
            c[a[i]] = 1;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if (b[i] <= k) {
            c[b[i]] = 1;
            y.insert(b[i]);
        }
    }
    if (x.size() < k / 2 || y.size() < k / 2) {
        cout << "NO\n";
        return ;
    }
    for (int i = 1; i <= k; i++) {
        if (!c[i]) {
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
    return ;
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
