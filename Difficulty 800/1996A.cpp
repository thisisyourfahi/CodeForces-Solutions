#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int total_legs;
        cin >> total_legs;
        if(total_legs % 4 == 0){
            cout << total_legs / 4 << endl;
        }
        else{
            cout << (total_legs / 4) + 1 << endl;
        }
    }
    return 0;
}
