// This code is a bit messy. You're welcome to modify.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    for(int i = n + 1; i <= 50; i++){

        bool prime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
                break;
            }
        }

        if(prime == true && i == m){
            cout << "YES" << endl;
            return 0;
        }
        else if(prime == true && i < m || i > m){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
