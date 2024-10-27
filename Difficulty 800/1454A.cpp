#include <bits/stdc++.h>
using namespace std;

void generate_permutation(int n) {
    vector<int> perm;
    for(int i = 1; i <= n; i++) {
        perm.push_back(i);
    }

    for(int i = 0; i < n - 1; i++) {
        int temp = perm[i];
        perm[i] = perm[i + 1];
        perm[i + 1] = temp;
    }

    for(int value : perm) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n;
        cin >> n;

        generate_permutation(n);
    }
    return 0;
}
