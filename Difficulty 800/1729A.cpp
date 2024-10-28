#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int a, b, c;
        cin >> a >> b >> c;

        int first_elevator = (a - 1);
        int second_elevator = abs(b - c) + (c - 1);

        if(first_elevator == second_elevator) cout << "3" << endl;
        else if(first_elevator < second_elevator) cout << "1" << endl;
        else cout << "2" << endl;
    }
    return 0;
}
