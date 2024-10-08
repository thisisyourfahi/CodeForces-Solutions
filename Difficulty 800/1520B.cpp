#include <bits/stdc++.h>
using namespace std;

int OrdinaryNumbers(long long n){
    int totalON = 0;
    for(int i = 1; i <= 9; i++){
        long long ordinaryNum = i;
        
        while(ordinaryNum <= n){
            ++totalON;;
            ordinaryNum = ordinaryNum * 10 + i;
        }
    }

    return totalON;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        
        cout << OrdinaryNumbers(n) << endl;
    }
    return 0;
}
