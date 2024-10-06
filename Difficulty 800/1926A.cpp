#include <bits/stdc++.h>
using namespace std;

char check(string s){
    int A = 0; 
    int B = 0;
    for(int i = 0; i < 5; i++){
        if(s[i] == 'A'){
            ++A;
        }
        else{
            ++B;
        }
    }

    if(A < B){
        return 'B';
    }
    else{
        return 'A';
    }
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
