#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    map<char, int> cnt;
    int ans = 0, dist = 0;
    for (int i = 0; i < n; i++) {
        cnt[s[i]]++;
        if (cnt[s[i]] == 1) {
            dist++;
        }   
        ans += dist;
    }
    cout << ans << '\n';
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
