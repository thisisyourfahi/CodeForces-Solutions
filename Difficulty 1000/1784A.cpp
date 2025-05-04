#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int pos = 1;
    ll spells = 0;
    spells += a[0] - pos;
    pos++;
    for(int i = 1; i < n; i++) {
        if(a[i] >= pos) {
            spells += (a[i] - pos);
            pos++;
        }
    }

    cout << spells << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
