#include <bits/stdc++.h>
using  namespace std;

void solve(int n, string s){
    int segments_length = 0;
    int first_cell = 0, last_cell = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'B'){
            first_cell = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'B'){
            last_cell = i;
            break;
        }
    }

    if(last_cell - first_cell == 0){
        cout << 1 << endl;
    }
    else{
        cout << last_cell - first_cell + 1 << endl;
    }
    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        solve(n, s);
    }

    return 0;
}
