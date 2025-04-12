#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    unordered_map<string, bool> mp;
    while(n--) {
        string s; cin >> s;
        if(!mp[s]) {
            cout << "NO" << endl;
            mp[s] = true;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
