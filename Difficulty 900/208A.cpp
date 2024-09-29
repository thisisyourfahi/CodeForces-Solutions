#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size();){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
            i = i + 3;
            continue;
        }
        else{
            cout << s[i];
            i++;
            if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
                cout << " ";
            }
        }
    }

    return 0;
}
