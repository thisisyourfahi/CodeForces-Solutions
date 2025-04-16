#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

        priority_queue<int> occurance;
        for(auto [key, value] : mp) {
            occurance.push(value);
        }

        while(!occurance.empty()) {
            if(occurance.size() < 2) {
                break;
            }
            int x = occurance.top(); occurance.pop();
            int y = occurance.top(); occurance.pop();
            x--, y--;
            if(x > 0) {
                occurance.push(x);
            }
            if(y > 0) {
                occurance.push(y);
            }
        }

        int ans = 0;
        while(!occurance.empty()) {
            ans += occurance.top();
            occurance.pop();
        }
        cout << ans << endl;
    }

    return 0;
}
