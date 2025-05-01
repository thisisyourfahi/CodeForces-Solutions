#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s; cin >> s;
    int cnt = 0;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == '0') {
            cnt++;
        }
        else {
            for(int k = i - 1; k >= 0; k--) {
                if(s[k] != '0') {
                    cnt++;
                }
            }
            break;
        }
    }
    cout << cnt << endl;
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
