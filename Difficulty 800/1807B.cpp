#include <bits/stdc++.h>
using namespace std;

void solution(){
    int size;
    cin >> size;

    vector<int> candies(size);
    for(int &value : candies){
        cin >> value;
    }
    
    // counting their candies
    int mihais_candies = 0, bianca_canides = 0;
    for(int value : candies){
        if(value % 2 == 0){
            mihais_candies += value;
        }
        else{
            bianca_canides += value;
        }
    }

    if(mihais_candies > bianca_canides){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


int main(){
    int t;
    cin >> t;

    while(t--){
        solution();
    }
    return 0;
}
