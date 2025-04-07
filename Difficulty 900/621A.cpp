#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n; cin >> n;

    vector<ll> a;
    ll sum = 0;

    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        sum += x;
        a.push_back(x);
    }

    if(sum % 2) {
        sort(a.begin(), a.end());
        for(ll i : a) {
            if(i % 2) {
                sum -= i;
                cout << sum << endl;
                break;
            }
        }
    }
    else {
        cout << sum << endl;
    }


    return 0;
}
