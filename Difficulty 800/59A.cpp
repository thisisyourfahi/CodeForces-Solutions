#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int LowerCase = 0, UpperCase = 0;
    int x = s.length();

    for(int i = 0; i < x; i++){
        if(isupper(s[i])){
            UpperCase++;
        }
        else{
            LowerCase++;
        }
    }

    if(UpperCase > LowerCase){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
    }

    cout << s << endl;
    return 0;
}
