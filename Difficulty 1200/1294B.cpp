#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    else {
        return a.first < b.first;
    }

}

void solve() {
    int q; cin >> q;
    int n = q;
    vector<pair<int, int>> a;
    while (q--) {
        int x, y; cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end(), cmp);
    // for (auto [x, y] : a) {
    //     cout << x << ' ' << y << '\n';
    // }
    bool possible = true;
    for (int i = 0; i < n - 1; i++) {
        auto x = a[i], y = a[i + 1];
        if (x.second > y.second) {
            possible = false;
            break;
        }
    }
    if (possible) {
        string ans; 
        int position_x = 0, position_y = 0;
        for (int i = 0; i < n; i++) {
            auto tmp = a[i];
            int moves_x = tmp.first - position_x;
            int moves_y = tmp.second - position_y;
            position_x = tmp.first;
            position_y = tmp.second;
            ans.append(moves_x, 'R');
            ans.append(moves_y, 'U');
        }
        cout << "YES\n";
        cout << ans << '\n';
    } else {
        cout << "NO\n";
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
