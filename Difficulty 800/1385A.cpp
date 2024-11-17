#include <bits/stdc++.h>
using namespace std;
 
void solution(int x, int y, int z) {
    if(x == y && x == z) {
        cout << "YES" << endl;
        cout << x << " " << y << " " << z;
        return ;
    }
    if(x == y && z < x) {
        cout << "YES" << endl;
        cout << x << " " << z << " 1";
        return ;
    }
    if(x == z && y < z) {
        cout << "YES" << endl;
        cout << x << " " << y << " 1";
        return ;
    }
    if(y == z && x < y) {
        cout << "YES" << endl;
        cout << y << " " << x << " 1";
        return;
    }
 
    cout << "NO";
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int x, y, z; cin >> x >> y >> z;
        solution(x, y, z);
        cout << endl;
    }
    return 0;
}
