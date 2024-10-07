#include <bits/stdc++.h>
using namespace std;

int blankSpace(int arr[], int n){
    int maxSpace = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cnt++;
        }
        else{
            maxSpace = max(maxSpace, cnt);
            cnt = 0;
        }
    }
    
    maxSpace = max(maxSpace, cnt);

    return maxSpace;

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

        cout << blankSpace(arr, n) << endl;
    }

    return 0;
}
