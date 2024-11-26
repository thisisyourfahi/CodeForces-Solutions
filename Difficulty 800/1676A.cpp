#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int left_sum = s[0] + s[1] + s[2];
        int right_sum = s[3] + s[4] + s[5];

        (left_sum == right_sum) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}
