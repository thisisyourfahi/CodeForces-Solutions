#include <iostream>
#include <vector>
using namespace std;

void solution(){
    int left_size, right_size, max_sum;
    cin >> left_size >> right_size >> max_sum;

    vector<int> left_pocket(left_size);
    vector<int> right_pocket(right_size);

    // reading left_pocekt coins
    for(int &value : left_pocket){
        cin >> value;
    }
    // reading right_pocket coins
    for(int &value : right_pocket){
        cin >> value;
    }

    int total_ways =  0;
    //counting pairs with sum <= max_sum
    for(int left_value : left_pocket){
        for(int right_value : right_pocket){
            if(left_value + right_value <= max_sum){
                total_ways++;
            }
        }
    }

    cout << total_ways << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solution();
    }
    return 0;
}
