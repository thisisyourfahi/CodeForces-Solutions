#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    int freq_of_characters[3] = {0};
    for(int i = 0; i < s.size(); i++) {
        int index = s[i] - 65;
        freq_of_characters[index]++;
    }
    
    freq_of_characters[1] = freq_of_characters[1] - freq_of_characters[0];
    if(freq_of_characters[1] == freq_of_characters[2]) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        cout << solution(s) << endl;
    }

    return 0;
}
