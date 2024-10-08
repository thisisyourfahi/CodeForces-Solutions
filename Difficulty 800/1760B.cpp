#include <bits/stdc++.h>
using namespace std;

int calculate(int n, string s){
    int ch = 96;
    for(int i = 0; i < n; i++){
        if(s[i] > ch){
            ch = s[i];
        }
    }

    return ch - 96;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int wordsNeedToLearn = calculate(n, s);
        cout << wordsNeedToLearn << endl;
    }
    return 0;
}
