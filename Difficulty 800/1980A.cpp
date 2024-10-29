#include <bits/stdc++.h>
using namespace std;

int solution(string problems_bank, int len, int rounds) {
    int min_problems_require = 0;
    int frequency_problems[7] = {0};
    for(int i = 0; i < len; i++) {
        char ch = problems_bank[i];
        int digit = ch - 'A';
        frequency_problems[digit] += 1;
    }

    for(int i = 0; i < 7; i++) {
        if(frequency_problems[i] < rounds) {
            min_problems_require += rounds - frequency_problems[i];
        }
    }
    return min_problems_require;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n, m;
        cin >> n >> m;
        string problems_bank;
        cin >> problems_bank;

        cout << solution(problems_bank, n, m) << endl;
    }
}
