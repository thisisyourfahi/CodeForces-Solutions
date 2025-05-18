#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int mask = 0; mask < (1 << n); mask++) {
        int ans = 0;
        for (int k = 0; k < n; k++) {
            if ((mask >> k) & 1) {
                ans += a[k];
            } else {
                ans -= a[k];
            }
        }
        if (ans % 360 == 0) {
            cout << "YES" << endl;
            return ;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
