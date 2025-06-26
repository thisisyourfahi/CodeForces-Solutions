#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int median_value = abs(a[0]), median_required_position = (ceil) (n / 2.0) - 1;
    for (int i = 0; i < n; i++) {
        a[i] = abs(a[i]);
    }
    sort(a.begin(), a.end());
    int k;
    vector<bool> possible(n, false);
    for (int i = 0; i < n; i++) {
        if (a[i] == median_value) {
            k = n - 1 - i;
            break;
        }
    }
    for (int i = 0; i <= k; i++) {
        possible[i] = true;
    }
    possible[n - 1] = true;
    if (possible[median_required_position]) cout << "YES\n";
    else cout << "NO\n";

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
