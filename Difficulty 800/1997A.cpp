#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(s.size() == 1) {
            if(s[0] == 'a') {
                s.push_back('b');
            }
            else if(s[0] == 'z') {
                s.push_back('y');
            }
            else {
                char c = s[0] + 1;
                s.push_back(c);
            }
            cout << s << endl;
            continue;
        }
        bool distinct = true;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == s[i + 1]) {
                distinct = false;
                char c;
                if(s[i] == 'a') {
                    c = s[i] + 1;
                }
                else if(s[i] == 'z') {
                    c = s[i] - 1;
                }
                else {
                    c = s[i] + 1;
                }
                s.insert(i + 1, string(1, c));
                break;
            }
        }
        if(distinct) {
            if(s[0] != 'z') {
                s.insert(0, "z");
            }
            else {
                s.insert(0, "a");
            }
        }
        cout << s << endl;
    }


    return 0;
}
