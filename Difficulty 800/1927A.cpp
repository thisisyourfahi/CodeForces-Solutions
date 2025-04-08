#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int white(string s, int n) {
    int first_b = 0, last_b;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'B') {
            first_b = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == 'B') {
            last_b = i;
            break;
        }
    }

    return last_b - first_b + 1;
}

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        cout << white(s, n) << endl;
    }

    return 0;
}
