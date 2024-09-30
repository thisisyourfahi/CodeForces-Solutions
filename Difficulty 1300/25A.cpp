// You are welcome if you want to make this code a bit more efficient. 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int evencount = 0, oddcount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            ++evencount;
        }
        else{
            ++oddcount;
        }
        if(evencount >= 2 || oddcount >= 2){
            break;
        }
    }

    int k;
    if(evencount >= 2){
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 1){
                k = i + 1;
                break;
            }
        }
    }
    else if(oddcount >= 2){
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                k = i + 1;
                break;
            }
        }
    }

    cout << k  << endl;
}
