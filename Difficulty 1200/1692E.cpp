#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum < k) return -1;
    if (sum == k) return 0;

    int l = 0, r = 0, ans = 0, segment = INT_MIN;
    while (r < n) {
        ans += a[r];
        if(ans <= k) {
            segment = max(segment, (r - l + 1));
        }
        else {
            while (ans > k && l <= r) {
                ans -= a[l];
                l++;
            }
            if (ans <= k) {
                segment = max(segment, (r - l + 1));
            }
        }
        r++;
    }
    
    return (n - segment);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cout << solve() << endl;
    }

    return 0;
}
