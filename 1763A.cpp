#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = 0, mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx |= a[i];
        mn &= a[i];
    }

    cout << mx - mn << endl;

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
