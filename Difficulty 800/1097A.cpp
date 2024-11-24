#include <bits/stdc++.h>
using namespace std;

string solution(string cards[]) {
    char rank_of_the_card = cards[0][0];
    char suit_of_the_card = cards[0][1];

    for(int i = 1; i < 6; i++) {
        if(rank_of_the_card == cards[i][0] || suit_of_the_card == cards[i][1]){
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string cards[6];
    for(int i = 0; i < 6; i++) {
        cin >> cards[i];
    }

    cout << solution(cards) << endl;
    return 0;
}
