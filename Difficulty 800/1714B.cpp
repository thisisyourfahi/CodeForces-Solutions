#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        unordered_set<int> unique_elements;
        for(int i = n - 1; i >= 0; i--) {
            int size_before = unique_elements.size();
            unique_elements.insert(v[i]);
            if(size_before == unique_elements.size()) {
                cout << n - size_before << endl;
                break;
            }
        }
        if(unique_elements.size() == n) {
            cout << 0 << endl;
        }
    }

    return 0;
}
