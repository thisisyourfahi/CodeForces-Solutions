#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    string s; cin >> s;
  
    vector<int> freq(4, 0);
    for (char c : s) {
        if (c != '?') {
            int d = c - 'A';
            freq[d]++;
        }
    }
    int ans = 0;
    for (int i : freq) {
        ans += min(n, i);
    }
    cout << ans << endl;
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
