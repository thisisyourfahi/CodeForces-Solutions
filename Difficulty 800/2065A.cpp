#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        s.pop_back();
        s.pop_back();
        s += 'i';
        cout << s << endl;
    }

    return 0;
}
