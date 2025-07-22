#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    int index = 1;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    int ans = 0;
    int l = 0, r = 0;
    while (r < n) {
        ans += a[r];
        if (r - l + 1 == k) {
            if (ans < sum) {
                index = l + 1;
                sum = ans;
            }
            ans -= a[l];
            l++;
        }
        r++;
    }
    cout << index << '\n';
}

int main() {
    solve();
}
