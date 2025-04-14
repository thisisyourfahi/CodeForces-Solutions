#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;
    unordered_map<string, string> mp;
    unordered_map<string, bool> track;

    while(t--) {
        string old_name, new_name;
        cin >> old_name >> new_name;
        if(!track[old_name]) {
            mp[old_name] = new_name;
            track[new_name] = true;
        }
        else {
            for(auto [key, value] : mp) {
                if(value == old_name) {
                    mp[key] = new_name;
                    track[new_name] = true;
                }
            }
        }
    }
    cout << mp.size() << endl;
    for(auto [key, value] : mp) {
        cout << key << " " << value << endl;
    }

    return 0;
}
