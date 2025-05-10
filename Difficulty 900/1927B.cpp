#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> freq(26, 0);
    string answer;
    for (int i : a) {
        for (int j = 0; j < 26; j++) {
            if (freq[j] == i) {
                char c = 'a' + j;
                answer.push_back(c);
                freq[j]++;
                break;
            }
        }
    }
    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
