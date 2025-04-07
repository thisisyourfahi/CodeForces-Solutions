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
        for(int i = 0; i < n; i++) { 
            int x; cin >> x;
            string moves;
            cin >> moves;
            for(char c : moves) {
                if(c == 'D') {
                    // increase(opposite action, as we are recovering the actual code)
                    if(a[i] == 9) {
                        a[i] = 0;
                    }
                    else {
                        a[i]++;
                    }
                }
                else {
                    if(a[i] == 0) {
                        a[i] = 9;
                    }
                    else {
                        a[i]--;
                    }
                    // decrease
                }
            }
        }
        for(int i : a) {
            cout << i << " ";
        } cout << endl;
    }

    return 0;
}
