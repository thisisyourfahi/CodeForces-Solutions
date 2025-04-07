#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int spells_cnt = 0;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; ) {
            if(a[i] == 1 && a[i + 1] == 1) {
                spells_cnt++;
                i += 2;
            }
            else {
                spells_cnt++;
                i++;
            }
        }
        cout << spells_cnt << endl;
    }

    return 0;
}
