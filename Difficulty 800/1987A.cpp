#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    int time = 0;
    while (n > 1) {
        time += k;
        n--;
    }
    time += 1;
    cout << time << endl;
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
