#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, threshold;
    cin >> n >> threshold;
    int golds = 0;
    int golds_given = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i : a) {
        if(i >= threshold) {
            golds += i;
        }
        else if(i == 0 && golds > 0) {
            golds_given++;
            golds--;
        }
    }
    cout << golds_given << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
