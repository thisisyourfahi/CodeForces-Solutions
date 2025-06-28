#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    
    bool flag = false;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            flag = true;
            break;
        }
    }
    if (flag) {
        if (k > 0) {
            cout << "YES\n";
        } else {
            string rev = s;
            reverse(rev.begin(), rev.end());
            cout << (s < rev ? "YES" : "NO") << '\n';
        }
    } else {
        cout << "NO\n";
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
