#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    string words;
    cin >> n;

    for(i=0; i<n; i++){
        cin >> words;
        if(words.length() > 10){
            cout << words[0] << words.length() - 2 << words[words.length() - 1] << endl;
        }
        else{
            cout << words << endl;
        }
    }
    return 0;
}
