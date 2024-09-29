#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int LuckyDigits = 0;

    for(char digit : n){
        if(digit == '4' || digit == '7'){
            LuckyDigits++;
        }
    }

    if(LuckyDigits == 4 || LuckyDigits == 7){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
