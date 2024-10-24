#include <bits/stdc++.h>
using namespace std;

void solution(int arr[], int n){
    int left = 0;
    int right = n - 1;

    bool print_left = true;
    while(left <= right){
        if(print_left){
            cout << arr[left++] << " ";
            print_left = false;
        }
        else{
            cout << arr[right--] << " ";
            print_left = true;
        }
    }
    cout << endl;
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

        solution(arr, n);
    }
    return 0;
}
