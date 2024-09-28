#include<iostream>
using namespace std;

int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    int n = word1.length();
    int assess = 0;

    for(int i = 0; i < n; i++){
        if(word1[i] == word2[(n - 1) - i]){
            assess++;
        }
    }

    if(assess == n){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
