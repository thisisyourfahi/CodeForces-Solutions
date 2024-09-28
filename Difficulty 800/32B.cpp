#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int len = s.size();
    for(int i = 0; i < len;){

        if(s[i] == '.'){
            cout << "0";
            i++;
        }
        else{
            if(s[i + 1] == '.'){
                cout << "1";
            }
            else{
                cout << "2";
            }
            i += 2;
        }
    }
    cout << endl;
    return 0;
}
