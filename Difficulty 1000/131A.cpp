#include <bits/stdc++.h>
using namespace std;

void FirsLetterCapital(string s){
    char ch;
    bool accidentally = true;
    for(int i = 1; i <s.size(); i++){
        ch = s[i];
        if(ch >= 97 && ch <= 122){
            accidentally = false;
            break;
        }
    }

    if(accidentally){
        // cout << s[0];
        for(int i = 0; i < s.size(); i++){
            ch = tolower(s[i]);
            cout << ch;
        }
        cout << endl;
        return ;
    }
    else{
        cout << s << endl;
        return ;
    }
}

void FirstLetterLower(string s){
    char ch;
    bool accidentally = true;
    for(int i = 1; i < s.size(); i++){
        ch = s[i];
        if(ch >= 97 && ch <= 122){
            accidentally = false;
            break;
        }
    }
    
    if(accidentally){
        ch = toupper(s[0]);
        cout << ch;
        for(int i = 1; i < s.size(); i++){
            ch = tolower(s[i]);
            cout << ch;
        }
        cout << endl;
        return ;
    }
    else{
        cout << s << endl;
        return ;
    }

}

void check (string s){
    char ch= s[0];
    if(ch >= 65 && ch <= 90){
        FirsLetterCapital(s);
    }
    else{
        FirstLetterLower(s);
    }
}

int main(){
    string s;
    cin >> s;

    check(s);
}
