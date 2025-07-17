#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int b; cin >> b;
    
    a[0] = min(a[0], b - a[0]);
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            a[i] = b - a[i];
        } else {
            if(min(a[i], b - a[i]) >= a[i - 1]) {
                a[i] = min(a[i], b - a[i]);
            }
        }
    }
    
    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << '\n';
    
}

int main() {
	int t; cin >> t;
	while (t--) {
	    solve();
	}

}
