#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    vector<int> fruits(n), heights(n);
    for (int i = 0; i < n; i++) cin >> fruits[i];
    for (int i = 0; i < n; i++) cin >> heights[i];

    int l = 0, r = 0, ans = INT_MIN;
    ll sum = 0;
    while (l < n && r < n) {
        sum += fruits[r];
        if ((r < n - 1) && (sum <= k) && heights[r] % heights[r + 1] == 0) {
            ans = max(ans, (r - l + 1));
            r++;
        }
        else {
            if((r < n -1) && heights[r] % heights[r + 1] != 0) {
                if(sum <= k) {
                    ans = max(ans, (r - l + 1));
                }
                l = r + 1;
                r = l;
                sum = 0;
            }
            else {
                if(sum <= k) {
                    ans = max(ans, (r - l + 1));
                }
                sum -= fruits[l];
                l++;
                r++;
            }
        }
    }
    (ans == INT_MIN) ? cout << 0 << endl : cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
