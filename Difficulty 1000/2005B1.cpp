#include <bits/stdc++.h>
using namespace std;

int solution(int t1, int t2, int q, int n) {
    if(q > t1 && q > t2) {
        return n - max(t1, t2);
    }
    else if(q < t1 && q < t2) {
        return min(t1, t2)- 1;
    }
    else {
        return abs(t2 - t1) / 2;
    }
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n, m, q;
        cin >> n >> m >> q;

        int t1, t2;
        cin >> t1 >> t2 >> q;

        cout << solution(t1, t2, q, n) << endl;
    }
    return 0;
}
