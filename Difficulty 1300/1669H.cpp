#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> bits(31, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 30; j >= 0; j--) {
            if ((a[i] >> j) & 1) {
                bits[j]++;
            }
        } 
    }
    int ans = 0;
    for (int i = 30; i >= 0; i--) {
        int need = n - bits[i];
        if (need <= k) {
            ans += (1 << i);
            k -= need;
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
