#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        map<string, int> guys[3];
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < n; j++) {
                string s; cin >> s;
                guys[i][s]++;
            }
        }
        map<string, int> word_count;
        for(int i = 0; i < 3; i++) {
            for(auto [word, count] : guys[i]) {
                word_count[word]++;
            }
        }
        vector<int> score(3, 0);
        for(int i = 0; i < 3; i++) {
            for(auto [word, count] : guys[i]) {
                if(word_count[word] == 1) {
                    score[i] += 3;
                }
                else if(word_count[word] == 2) {
                    score[i] += 1;
                }
            }
        }
        for(int i : score) {
            cout << i << " ";
        } cout << endl;
    }

    return 0;
}
