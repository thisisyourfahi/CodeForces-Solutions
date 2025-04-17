#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = 1; i <= 5; i++) {
        if(a == min({a, b, c})) {
            a++;
        }
        else if(b == min({a, b, c})) {
            b++;
        }
        else {
            c++;
        }
    }
    cout << a * b * c << endl;
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
