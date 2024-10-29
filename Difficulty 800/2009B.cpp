#include <bits/stdc++.h>
using namespace std;

int beats(string s) {
    for(int i = 0; i < 4; i++) {
        if(s[i] == '#') {
            return i + 1;
        }
    }
}

void find_note(int n) {
    string beatmap[n];
    for(int i = 0; i < n; i++) {
        cin >> beatmap[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        cout << beats(beatmap[i]) << " ";
    }
    cout << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n;
        cin >> n;

        find_note(n);
    }
    return 0;
}
