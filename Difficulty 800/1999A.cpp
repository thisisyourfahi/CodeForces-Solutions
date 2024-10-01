#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int sumOfDigits = 0;
        while(n > 0){
            sumOfDigits += n % 10;
            n /= 10;
        }
        cout << sumOfDigits << endl;

    }
    return 0;
}
