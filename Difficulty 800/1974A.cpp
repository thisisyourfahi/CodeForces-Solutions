#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int x, y; cin >> x >> y;
    int total_screens = ceil(y / 2.0);
    int total_cells = total_screens * 15;
    int vacant_cells = total_cells - (y * 4);
    if (vacant_cells - x >= 0) {
        cout << total_screens << endl;
    }
    else {
        int reamining_x = x - vacant_cells;
        total_screens += ceil(reamining_x / 15.0);
        cout << total_screens << endl;
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
