#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        int freq[26] = {0};
        for(auto ch : s) {
            freq[ch - 'A']++;
        }

        int total_ballons = 0;
        for(auto i : freq) {
            (i > 0) ? total_ballons += i + 1 : total_ballons += i;
        }
        cout << total_ballons << endl;
    }
    
    return 0;
}
