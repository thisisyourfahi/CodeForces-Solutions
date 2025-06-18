#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    ll cnt1 = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1) cnt1++;
    }
    if (n == 1) {
        cout << "NO\n";
        return ;
    }

    (cnt1 + n > sum) ? cout << "NO\n" : cout << "YES\n"; 

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
