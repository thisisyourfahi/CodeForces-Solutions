#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) a[i] = i;

    if (n != x) {
        a[n - 1] = x;
        a[x] = n - 1;
    }
    
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
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
