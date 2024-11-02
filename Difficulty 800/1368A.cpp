#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int n) {
    int operations = 0;
    while(max(a, b) <= n) {
        if(a < b) {
            a += b;
        }
        else {
            b += a;
        }
        operations++;
    }
    return operations;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int a, b, n;
        cin >> a >> b >> n;

        cout << solution(a, b, n) << endl;
    }
    return 0;
}
