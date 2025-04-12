#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        int B = 0, b = 0;

        string answer;
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == 'b') {
                b++;
            }
            else if(s[i] == 'B') {
                B++;
            }
            else if(s[i] >= 97 && s[i] <= 122) {
                if(b == 0) {
                    answer.push_back(s[i]);
                }
                else {
                    b--;
                }
            }
            else if(s[i] >= 65 && s[i] <= 90) {
                if(B == 0) {
                    answer.push_back(s[i]);
                }
                else {
                    B--;
                }
            }
        }
        reverse(answer.begin(), answer.end());
        cout << answer << endl;
    }

    return 0;
}
