#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        unordered_set<char> unique_characters;
        for(char c : s) {
            unique_characters.insert(c);
        }
        string r;
        for(char c : unique_characters) {
            r.push_back(c);
        }
        sort(r.begin(), r.end());
        map<char, char> mp;
        int r_size = r.size();
        for(int i = 0; i < r_size; i++) {
            mp[r[i]] = r[r_size - 1 - i];
        }
        string answer;
        for(char c : s) {
            answer.push_back(mp[c]);
        }
        cout << answer << endl;
    }

    return 0;
}
