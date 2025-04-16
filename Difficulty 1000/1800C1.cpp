#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    priority_queue<int> deck;
    ll total_power = 0;
    for(int i = 0; i < n; i++) {
        if(!a[i]) {
            if(!deck.empty()) {
                total_power += deck.top();
                deck.pop();
            }
        }
        else {
            deck.push(a[i]);
        }
    }
    cout << total_power << endl;
}

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
