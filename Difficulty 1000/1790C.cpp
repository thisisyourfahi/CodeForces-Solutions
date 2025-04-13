#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> a(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - 1; j++) {
                int x; cin >> x;
                a[i].push_back(x);
            }
        }
        int x, y;
        int first_sequence;
        for(int i = 0; i < n; i++) {
            // finding the first the element of the permutation which would be same at least in two given sequences
            if(a[i][0] == a[i + 1][0]) {
                x = a[i][0];
                break;
            }
            else if(a[i][0] == a[i + 2][0]) {
                x = a[i + 2][0];
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            // finding the first sequence where the first element would be missing
            if(a[i][0] != a[i + 1][0]) {
                if(a[i][0] == x) {
                    y = a[i + 1][0];
                    first_sequence = i + 1;
                }
                else {
                    y = a[i][0];
                    first_sequence = i;
                }
                break;
            }
        }

        vector<int> answer;
        answer.push_back(x);
        for(int i = 0; i < n - 1; i++) {
            answer.push_back(a[first_sequence][i]);
        }
        for(int i : answer) {
            cout << i << " ";
        } cout << endl;
    }

    return 0;
}
