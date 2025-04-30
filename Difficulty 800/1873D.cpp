#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int total_operations = 0;

    for(int i = 0; i < n; ) {
        if(s[i] == 'B') {
            total_operations++;
            i += k;
        } 
        else {
            i++;
        }
    }
    cout << total_operations << endl;

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
