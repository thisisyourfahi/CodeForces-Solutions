#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    queue<int> white_indexes;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'W') {
            white_indexes.push(i);
        }
    }

    int l = 0, r = 0;
    int ans = INT_MAX, current_white = 0;

    while(l < s.size() && r < s.size()) {
        if(s[r] == 'W') {
            current_white++;
        }
        if(current_white > 0 && white_indexes.front() < l) {
            current_white--;
            white_indexes.pop();
        }

        if(r - l + 1 == k) {
            ans = min(ans, current_white);
            l++;
            r++;
        }
        else {
            r++;
        }
    }
    cout << ans << endl;
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
