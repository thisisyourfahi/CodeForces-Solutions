#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> contests(n);
    for (int i = 0; i < n; ++i) {
        cin >> contests[i];
    }

    sort(contests.begin(), contests.end());

    int training_day = 1;
    int trained_days = 0;

    for (int i = 0; i < n; ++i) {
        if (contests[i] >= training_day) {
            trained_days++;
            training_day++;
        }
    }

    cout << trained_days << endl;
    return 0;
}
