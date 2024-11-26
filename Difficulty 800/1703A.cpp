#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while (t--)
    {
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        (s == "yes") ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    
    return 0;
}
