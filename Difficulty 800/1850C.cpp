#include <bits/stdc++.h>
using namespace std;

string word(string s[]){
    string news;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            char c = s[i][j];
            if(c != '.'){
                news += c;
            }
        }
    }
    return news;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        string s[8];
        for(int i = 0; i < 8; i++){
            cin >> s[i];
        }
        cout << word(s) << endl;
    }
    return 0;
}
