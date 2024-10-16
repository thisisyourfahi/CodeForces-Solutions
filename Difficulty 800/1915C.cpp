#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    double square_root = sqrt(sum);
    int integer_part = static_cast<int>(square_root);

    if(square_root == integer_part){
        cout << "YES" << endl;
        return ;
    }
    else{
        cout << "NO" << endl;
        return ;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        solve(arr, n);
    }
}
