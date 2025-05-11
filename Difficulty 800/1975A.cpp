#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int segments = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            if (a[i] > a[0]) {
                segments++;
            }
            break;
        }
        else if (a[i] > a[i + 1]) {
            segments++;
        }
    }
    if (segments <= 1) cout << "Yes" << endl;
    else cout << "No" << endl;

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
