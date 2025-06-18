#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> positions(n + 1);
    for (int i = 0; i < n; i++) {
        int pos = i + 1, val = a[i];
        positions[val] = pos;
    }
    int fixed = 0;
    for (int i = 1; i <= n; i++) {
        int pos = positions[i], val = i;
        if (abs(pos - val) % k == 0) fixed += 1; 
    }
    int not_fixed = n - fixed;
    if (not_fixed > 2) cout << "-1\n";
    else if (not_fixed == 2) cout << 1 << '\n';
    else cout << 0 << '\n';
    // for (int i = 1; i <= n; i++) {
    //     cout << i << " -> " << positions[i] << '\n';
    // }
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
