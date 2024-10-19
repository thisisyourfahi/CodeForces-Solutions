#include <bits/stdc++.h>
using namespace std;

void solution(int a, int b){
    if(a == b){
        cout <<  "0" << endl;
    }
    else if(a < b){
        int diff = b - a;
        if(diff % 2 == 0){
            cout << "2" << endl;
        }
        else{
            cout << "1" << endl;
        }
    }
    else{
        int diff = b - a;
        if(diff % 2 == 0){
            cout << "1" << endl;
        }
        else{
            cout << "2" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        solution(a, b);
    }
    
    return 0;
}
