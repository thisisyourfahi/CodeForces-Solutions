#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> freq(n + 1);
    set<int> unique;
    for(int i = n; i >= 1; i--) {
        unique.insert(a[i]);
        freq[i] = unique.size();
    }
    while(m--) {
        int l; cin >> l;
        cout << freq[l] << endl;
    }

    return 0;
}
