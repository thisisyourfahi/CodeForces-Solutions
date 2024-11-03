#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, x;
    cin >> n >> x;

    int appears = 0;
    if(x == 1) {
        cout << 1 << endl;
        return 0;
    }
    // counting appearance for cel 1 and row 1
    if(x <= n) {
        appears += 2;
    }

    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            int quotient = x / i;
            if(i <= n && quotient <= n) {
                appears++;
            }
            // check if the pair is distinct and valid
            if(i != quotient && quotient <= n && i <= n) {
                appears++;
            }
        }
    }
    cout << appears << endl;

    return 0;    
}
