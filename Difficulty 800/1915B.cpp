#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    vector<vector<char>> grid(3, vector<char>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == 'A') {
                a++;
            }
            else if (grid[i][j] == 'C') {
                c++;
            }
            else if (grid[i][j] == 'B') {
                b++;
            }
        }
    }
    
    if (a == min({a, b, c})) cout << "A\n";
    else if (b == min({a, b, c})) cout << "B\n";
    else cout << "C\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
