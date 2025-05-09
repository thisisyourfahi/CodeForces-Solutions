#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++) cin >> a[i];
  
    sort(a.begin(), a.end());
    int mx = a[n - 1];
    int operations = 0;
    for (int i = 0; i < k - 1; i++) {
        int curr = a[i];
        operations += ((curr - 1) + curr);
    } 
    cout << operations << endl;
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
