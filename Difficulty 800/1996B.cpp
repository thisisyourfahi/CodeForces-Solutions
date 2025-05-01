#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<char>> oldGrid(n, vector<char>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> oldGrid[i][j];
        }
    }

    int d = n / k;
    vector<vector<char>> newGrid(d, vector<char>(d));
    for(int i = 0; i < d; i++) {
        for(int j = 0; j < d; j++) {
            newGrid[i][j] = oldGrid[(i + 1) * k - 1][(j + 1) * k - 1];
        }
    }

    for(int i = 0; i < d; i++) {
        for(int j = 0; j < d; j++) {
            cout << newGrid[i][j];
        } cout << endl;
    }
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
