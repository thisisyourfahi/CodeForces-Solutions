#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int candies[n];
    int oranges[n];
    int min_candies = INT_MAX;
    int min_oranges = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> candies[i];
        if(candies[i] < min_candies){
            min_candies = candies[i];
        }
    }
    for(int i = 0; i < n; i++){
        cin >> oranges[i];
        if(oranges[i] < min_oranges){
            min_oranges = oranges[i];
        }
    }

    long long totalmoves = 0;
    for(int i = 0; i < n; i++){
        totalmoves += max((candies[i] - min_candies), (oranges[i] - min_oranges));
    }
    cout << totalmoves << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
