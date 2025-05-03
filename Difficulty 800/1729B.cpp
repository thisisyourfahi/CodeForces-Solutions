#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string answer;
    int i = n - 1;
    while(i >= 0) {
        if(s[i] == '0') {
            int d1 = s[i - 1] - 48;
            int d2 = s[i - 2] - 48;
            char c = 'a' + ((d2 * 10) + d1) - 1;
            answer.push_back(c);
            i -= 3;
        }
        else {
            int d = s[i] - 49;
            char c = 'a' + d;
            answer.push_back(c);
            i -= 1;
        }
    }
    reverse(answer.begin(), answer.end());
    cout << answer << endl; 
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
