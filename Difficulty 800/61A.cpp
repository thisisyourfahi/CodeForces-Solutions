#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a;
    cin >> s >> a;

    int n = s.size();
    string Output[n];
    for(int i = 0; i < n; i++){
        if(s[i] == a[i]){
            Output[i] = '0';
        }
        else{
            Output[i] = '1';
        }
    }

    for(int i = 0; i < n; i++){
        cout << Output[i];
    }
    return 0;
}
