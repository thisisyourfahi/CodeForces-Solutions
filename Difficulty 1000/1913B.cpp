#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    string s; cin >> s;

    int n = s.size(), zeros = 0, ones = 0;
    f(i, n) {
        if (s[i] == '1') ones++;
        else zeros++;
    }
    
    f(i, n) {
        if (s[i] == '1' && zeros > 0) zeros--;
        else if (s[i] == '0' && ones > 0) ones--;
        else {
            cout << n - i << '\n';
            return ;
        }
    }
    cout << 0 << '\n';
    return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
