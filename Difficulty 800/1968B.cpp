#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;

    int ans = 0, i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            i++;
            ans++;
        }
        j++;
    } 
    cout << ans << '\n';
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
