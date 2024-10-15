#include <bits/stdc++.h>
using namespace std;

void minimumCost(){
    int n, a, b;
    cin >> n >> a >> b;

    if(a * 2 > b){
        int rem = n % 2;
        int total_price = b * (n / 2) + rem * a;
        cout << total_price << endl;
    }
    else{
        cout << a * n << endl;
    }
    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        minimumCost();
    }
    return 0;
}
