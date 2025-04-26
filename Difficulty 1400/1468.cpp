#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n; cin >> n;
    int serial = 0;
    set<pair<int, int>> position;
    multiset<pair<int, int>> money;
    vector<int> answer;
    
    while(n--) {
        int command; cin >> command;

        if(command == 1) {
            serial += 1;
            int m; cin >> m;
            position.insert({serial, m});
            money.insert({m, -serial});
        }
        else if(command == 2) {
            // monocorps turn
            int pos = position.begin()->first;
            int mon = position.begin()->second;
            
            answer.push_back(pos);
            
            position.erase(position.begin());
            money.erase({mon, -pos});
        }
        else {
            // polycorps turn
            int p = -money.rbegin()->second;
            int mon = money.rbegin()->first;

            answer.push_back(p);

            position.erase({p, mon});
            money.erase(--money.end());
        }
    }

    for(int i : answer) {
        cout << i << " ";
    } cout << endl;


    return 0;
}
