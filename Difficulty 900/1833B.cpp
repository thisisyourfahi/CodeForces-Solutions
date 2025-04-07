#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vector<int> freq(26, 0);
        for(char c : s) {
            int dig = c - 'a';
            freq[dig]++;
        }

        int odd_characters = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 == 1) {
                odd_characters++;
            }
        }

        if(odd_characters - k <= 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
