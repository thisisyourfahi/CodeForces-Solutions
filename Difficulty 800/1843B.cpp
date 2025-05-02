#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += (1ll * abs(a[i]));
    }

    int nb = 0, j;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            nb++;
            for(j = i + 1; j < n; j++) {
                if(a[j] > 0) {
                    break;
                }
            }
            i = j;
        }
    }
    cout << sum << " " << nb << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
