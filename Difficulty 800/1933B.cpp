#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    unordered_set<int> st;
    ll sum = 0;
    for (int i : a) {
        st.insert(i % 3);
        sum += i;
    }
    // cout << "sum " << sum << ' ' << sum % 3 << '\n';
    int rem = sum % 3;
    if (rem) {
        if (rem == 2 || (rem == 1 && st.find(rem) != st.end())) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    } else {
        cout << rem << '\n';
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
