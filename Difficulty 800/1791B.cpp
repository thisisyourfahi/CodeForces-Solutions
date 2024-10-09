#include <bits/stdc++.h>
using namespace std;

bool wouldPass(int n, string s){
    int cpv = 0; // current position vertically
    int cph = 0; // current position horizontally

    for(int i = 0; i < n; i++){
        if(s[i] == 'U'){
            ++cpv;
        }
        else if(s[i] == 'D'){
            --cpv;
        }
        else if(s[i] == 'R'){
            ++cph;
        }
        else{
            --cph;
        }

        if(cpv == 1 && cph == 1){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        if(wouldPass(n, s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
