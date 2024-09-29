#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c, sumofx = 0, sumofy = 0, sumofz = 0;
    cin >> n;

    while(n--){
        cin >> a >> b >> c;
        sumofx += a;
        sumofy += b;
        sumofz += c;
    }

    if(sumofx == 0 && sumofy == 0 && sumofz == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
