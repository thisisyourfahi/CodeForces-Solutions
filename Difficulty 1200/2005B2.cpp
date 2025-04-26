#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    
    vector<int> teachers(m);
    for(int i = 0; i < m; i++) {
        cin >> teachers[i];
    }

    sort(teachers.begin(), teachers.end());
    vector<int> answer;

    while(q--) {
        int david; cin >> david;

        if(david < teachers[0]) {
            answer.push_back(teachers[0] - 1);
        }
        else if(david > teachers[m - 1]) {
            answer.push_back(n - teachers[m - 1]);
        }
        else {
            auto it = lower_bound(teachers.begin(), teachers.end(), david);
            auto an = (*(it) - *(--it)) / 2;
            answer.push_back(an);
        }
    }
    for(int i : answer) {
        cout << i << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
