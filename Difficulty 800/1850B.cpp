#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, a, b;
        int winner = 1, quality = 0;
 
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a >> b;
            if(b > quality && a <= 10){
                quality = b;
                winner = i;
            }
        }
        cout << winner << endl;
    }
    return 0;
}
