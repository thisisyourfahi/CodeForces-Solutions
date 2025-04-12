#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<string, bool> mp;
    for(int i = n - 1; i >= 0; i--) {
        if(!mp[v[i]]) {
            cout << v[i] << endl;
            mp[v[i]] = true;
        }
    }

    return 0;
}
