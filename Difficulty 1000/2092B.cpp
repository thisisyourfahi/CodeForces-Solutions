#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        int root1 = 0, root2 = 0;
        for(int i = 0; i < n; i += 2) {
            if(a[i] == '0') {
                root1++;
            }
            if(b[i + 1] == '0') {
                root1++;
            }
            if(b[i] == '0') {
                root2++;
            }
            if(a[i + 1] == '0') {
                root2++;
            }
        }
        if(((n + 1) / 2) <= root1 && (n / 2) <= root2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
