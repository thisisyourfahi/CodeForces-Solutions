// I am sad today. I have lost my 24 days streak on CodeForces :( 
// 4th Oct, 2024

#include <bits/stdc++.h>
using namespace std;

int CountTheTotalCandies(int arr[], int n){
    sort(arr, arr + n);
    int minValue = arr[0];
    int totalCaniesAte = 0;

    for(int i = 1; i < n; i++){
        totalCaniesAte += (arr[i] - minValue);
    }
    return totalCaniesAte;
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

        cout << CountTheTotalCandies(arr, n) << endl;
    }
    return 0;
}
