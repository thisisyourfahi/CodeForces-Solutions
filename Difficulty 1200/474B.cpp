#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    int m; cin >> m;
    while (m--) {
        int key; cin >> key;
        int l = 0, r = n - 1, ans = 0;
        while (l <= r) {
            int m = (l + r) / 2;
            if (key <= prefix_sum[m]) {
                ans = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        cout << ans + 1<< '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
