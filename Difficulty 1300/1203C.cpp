#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    long long gcd = a[0];
    for (int i = 1; i < n; i++) gcd = __gcd(gcd, a[i]);
    // cout << gcd << '\n';
    set<long long> div;
    for (long long i = 1; i * i <= gcd; i++) {
        if (!(gcd % i)) {
            div.insert(i);
            div.insert(gcd / i);
        }
    }
    cout << div.size() << '\n';
}

int main() {
	solve();

}
