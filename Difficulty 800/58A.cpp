#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        if(!(ch == 'h' || ch == 'e' || ch == 'l' || ch == 'o')){
            s.erase(i, 1);
            i--;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i + 1]){
            s.erase(i, 1);
            i--;
        }
    }

    cout << s;
}
