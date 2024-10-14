#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int cnt = 1;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            ++cnt;
            if(cnt == 3){
                cout << arr[i] << endl;
                return ;
            }
        }
        else{
            cnt = 1;
        }
    }
    cout << "-1" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
