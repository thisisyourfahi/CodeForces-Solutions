#include <bits/stdc++.h>
using namespace std;

int max_bananas() {
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 1; i <= 5; i++) {
        int *min_ptr = &a;
        if(*min_ptr > b) min_ptr = &b;
        if(*min_ptr > c) min_ptr = &c;
        (*min_ptr)++;
    }
    return (a * b * c);
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        cout << max_bananas() << endl;
    }
    return 0;
}
