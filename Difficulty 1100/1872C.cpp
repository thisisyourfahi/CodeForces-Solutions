#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int l, r; cin >> l >> r;
    if (r <= 3) {
        cout << -1 << endl;
    }
    else if (l == r) {
        bool divisior = false;
        int a, times;
        for (int i = 2; i * i <= l; i++) {
            if (l % i == 0) {
                divisior = true;
                a = i;
                times = (l / i) - 1;
                break;
            }
        }
        if (divisior) {
            cout << a * times << " " << a << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    else {
        int a = (r - 2) / 2;
        a = a * 2;
        cout << a << ' ' << 2 << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
