#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;
    
    while(t--) {
        int x; cin >> x;
        string a, b;
        cin >> a >> b;
        bool can_distinguish = false;
        for(int i = 0; i < x; i++) {
            if((a[i] != b[i]) && !(a[i] == 'G' && b[i] == 'B') && !(a[i] == 'B' && b[i] == 'G')) {
                can_distinguish = true;
                break;
            }
        }
        if(can_distinguish) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
