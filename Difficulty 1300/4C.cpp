#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> mp;

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(mp[s] >= 1) {
            int count = mp[s];
            string new_name = s + to_string(count);
            cout << new_name << endl;
            mp[s]++;
        }
        else {
            cout << "OK" << endl;
            mp[s] = 1;
        }
    }

    return 0;
}
