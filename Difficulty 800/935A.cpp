#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int ways = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            ways++;
        }
    }
    
    cout << ways << endl;
}

int main(){
    int n;
    cin >> n;

    solve(n);

    return 0;
}
