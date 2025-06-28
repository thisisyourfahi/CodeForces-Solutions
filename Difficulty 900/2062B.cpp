#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i <n; i++) {
        int left = (i * 2) + 1;
        int right = ((n - i - 1) * 2) + 1;
        int mx = max(left, right);
        if (a[i] < mx) {
            cout << "NO\n";
            return ;
        } 
    }
    cout << "YES\n";
    return ;
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
