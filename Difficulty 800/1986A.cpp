#include <bits/stdc++.h>
using namespace std;

int smallest_value(int a, int b, int c) {
    int MIN = min(min(a, b), min(b, c));
    int MAX = max(max(a, b), max(b, c));
    return MAX - MIN;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << smallest_value(a, b, c) << endl;
    }
    return 0;
}
