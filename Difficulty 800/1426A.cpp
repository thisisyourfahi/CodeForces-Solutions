#include <bits/stdc++.h>
using namespace std;

int countFloor(int n, int x){
    int m = 2;
    int floor = 0;

    while(m < n){
        floor++;
        m = x * floor + 2;
        
    }

    return floor + 1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        if(n == 1 || n == 2){
            cout << "1" << endl;
        }
        else{
            cout << countFloor(n, x) << endl;
        }
    }
}
