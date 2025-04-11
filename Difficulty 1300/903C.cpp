#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool same_values = false;
    int highest_appearance = -1;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] == a[i + 1]) {
            same_values = true;
            int j = 2;
            for(int k = i + 1; k < n; k++) {
                if(a[k] == a[k + 1]) {
                    j++;
                }
                else {
                    break;
                    i = k;
                }
            }
            highest_appearance = max(j, highest_appearance);

        } 
    }
    if(!same_values) {
        cout << "1" << endl;
    }
    else {
        cout << highest_appearance << endl;
    }

    return 0;
}
