#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int total_stations, queries;
    cin >> total_stations >> queries;
    vector<int> stations(total_stations);
    map<int, set<int>> track;
    for(int i = 0; i < total_stations; i++) {
        cin >> stations[i];
        track[stations[i]].insert(i);
    }
    
    while(queries--) {
        int a, b; cin >> a >> b;
        if((track.find(a) == track.end()) || (track.find(b) == track.end())) {
            cout << "NO" << endl;
        }
        else {
            int index_a, index_b;
            index_a = *track[a].begin();
            index_b = *track[b].rbegin();
            if(index_a < index_b) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    // for(auto [key, value] : track) {
    //     cout << key << " -> ";
    //     for(int i : value) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
}

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
