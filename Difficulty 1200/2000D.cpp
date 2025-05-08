#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    string s; cin >> s;
    vector<ll> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    ll score = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        if (s[l] == 'L' && s[r] == 'R') {
            if (l == 0) {
                score += prefix_sum[r];
            }
            else {
                score += (prefix_sum[r] - prefix_sum[l - 1]);
            }
            l++;
            r--;
        }
        else if (s[l] == 'L') {
            r--;
        }
        else if (s[r] == 'R') {
            l++;
        }
        else {
            r--;
            l++;
        }
    } 
    cout << score << endl;
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
