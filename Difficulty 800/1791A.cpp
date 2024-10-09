#include <bits/stdc++.h>
using namespace std;

bool check(char ch){
    if(ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' ||  ch == 'f' || ch == 'r' || ch == 's'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        char ch;
        cin >> ch;

        if(check(ch)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
