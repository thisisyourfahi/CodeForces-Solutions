#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    int l = 0, r = n - 1;
    if (a[l] != a[r]) {
        // the first and last element are not same. but theres a catch.
        // [1 1 1 2 3 4 4]
        int answer_shifting_left = 0, answer_shifting_right = 0;
        // shifting left iterator
        while (l < n - 1 && a[l] == a[l + 1]) {
            l++;
        }
        answer_shifting_left = max(0, n - 1 - l);
        // right iterator independent to the left iterator
        while (r > 0 && a[r] == a[r - 1]) {
            r--;
        }
        answer_shifting_right = max(0, r);
        cout << min(answer_shifting_left, answer_shifting_right) << '\n';
    } 
    else {
        // at this point we know that the last and first element is same
        // so first we will start shifting from the second first element and go as right as possible
        // and the move the right iteraot and go as left as possible
        // [1 1 1 1 2 3 4 1 1]
        while (l < n - 1 && a[l + 1] == a[r]) l++;
        while (r > 0 && a[r] == a[l]) r--;
        if (l >= r) {
            // means all the elements are equal
            // only in that case our pointer will cross each other. so answer 0
            cout << 0 << '\n';
        } else {
            cout << r - l << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
