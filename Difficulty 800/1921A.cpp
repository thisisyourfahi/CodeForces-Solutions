#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int arms;
    if(x1 == x2){
        arms = abs(y1 - y2);
        cout << arms * arms << endl;
    }
    else if(x1 == x3){
        arms = abs(y1 - y3);
        cout << arms * arms << endl;
    }
    else if(x1 == x4){
        arms = abs(y1 - y4);
        cout << arms * arms << endl;
    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
