#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<ll> 
#define f(i, n) for (int i = 0; i < n; i++) 
#define all(v) v.begin(), v.end()

void solve() {
    int n; cin >> n;
    map<char, int> mp;
    mp['a'] = n / 5;
    mp['e'] = n / 5;
    mp['i'] = n / 5;
    mp['o'] = n / 5;
    mp['u'] = n / 5;
    int rem = n % 5;
    string ans;
    for (auto [key, value] : mp) {
        ans.append(value, key);
        if (rem > 0) {
            ans.push_back(key);
            rem--;
        }
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
