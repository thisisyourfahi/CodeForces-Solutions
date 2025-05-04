#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, c; cin >> n >> c;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> cost;
    for(int i = 0; i < n; i++) {
        cost.push_back(i + 1 + a[i]);
    }
    sort(cost.begin(), cost.end());
    int used_teleporters = 0;
    for(int i : cost) {
        if(c >= i) {
            used_teleporters++;
            c -= i;
        }
        else {
            break;
        }
    }
    cout << used_teleporters << endl;
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
