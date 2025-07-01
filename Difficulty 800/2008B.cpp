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

    int sq = sqrt(n);
    if (sq * sq != n) {
        cout << "No\n";
        return ;
    }
    for (int i = 0; i < sq; i++) {
        for (int j = 0; j < sq; j++) {
            bool edge = (i == 0 || i == sq - 1 || j == 0 || j == sq - 1);
            if (edge && s[i * sq + j] == '1') {

            } else if (!edge && s[i * sq + j] == '0') {

            } else {
                cout << "No\n";
                return ;
            }
        }
    } 
    cout << "Yes\n";
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
