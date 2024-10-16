#include <bits/stdc++.h>
using namespace std;
 
void DifferentValue(int a, int b, int c){
    if(a == b){
        cout << c << endl;
    }
    else if(a == c){
        cout << b << endl;
    }
    else{
        cout << a << endl;
    }
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
 
        DifferentValue(a, b, c);
    }
    return 0;
}
