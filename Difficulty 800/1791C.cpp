#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int move = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == s[n - 1 - i]) {
            int j = n - 1 - i;
            move = j - i + 1;
            break;
        }
    }

    if(move == -1) {
        cout << 0 << endl;
    }
    else {
        cout << move << endl;
    }
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
