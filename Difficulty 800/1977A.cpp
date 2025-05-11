#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int x, m; cin >> x >> m;
    if (x < m) {
        cout << "No" << endl;
    }
    else {
        int diff = x -m;
        if (diff % 2) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
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
