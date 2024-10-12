#include <bits/stdc++.h>
using namespace std;

string Check(int a, int b, int c){
    if(a + b >= 10 || a + c >= 10 || b + c >= 10){
        return "YES";
    }
    return "NO";
}

int main(){
    int n;
    cin >> n;

    while(n--){
        int a, b, c;
        cin >> a >> b >> c;

        cout << Check(a, b, c) << endl;
    }
    return 0;
}
