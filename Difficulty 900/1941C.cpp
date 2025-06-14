#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    map<string, int> mp;
    for (int i = 0; i < n - 2;) {
        if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')) {
            mp["map"] += 1;
            i += 3;
        } else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            mp["pie"] += 1;
            i += 3;
        } else {
            i++;
        }
    } 
    cout << mp["map"] + mp["pie"] << '\n';
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
