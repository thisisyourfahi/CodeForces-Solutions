#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void on_bits(int n) {
    cout << setw(3) << n << " = ";
    
    for (int i = __lg(n); i>= 0; i--) {
        if ((n >> i) & 1) cout << 1 << ' ';
        else cout << 0 << ' ';
    } cout << endl;
}

bool kth_bit_on(int n, int i) {
    return ((n >> i) & 1);
}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];
    int fedor; cin >> fedor;

    int friends = 0;
    for (int i = 0; i < m; i++) {
        int current_player = a[i];
        int different_bits = 0;
        for (int k = 0; k <= n; k++) {
            if (kth_bit_on(current_player, k) != kth_bit_on(fedor, k)) {
                different_bits++;
            }
        }
        if (different_bits <= k) friends++;
    }
    cout << friends << endl;
    
    //on_bits(111);
    // for (int i = 0; i < m; i++) on_bits(players[i]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
