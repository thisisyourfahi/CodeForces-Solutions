#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    int m = n - 1;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> a(n);
    a[0] = b[0];
    a[n - 1] = b[m - 1];
    for (int i = 1; i < n - 1; i++) {
        a[i] = b[i - 1] | b[i];
    }
    for (int i = 1; i < n; i++) {
        if ((a[i] & a[i - 1]) != b[i - 1]) {
            cout << -1 << endl;
            return ;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;
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
