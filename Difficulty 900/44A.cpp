#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n; cin >> n;
    int leaves_picked = 0;
  
    map<string, map<string, bool>> bouquet;
    // creating a map inside another map to track the picked up leave's tree and color
    for(int i = 0; i < n; i++) {
        string tree, color;
        cin >> tree >> color;
        if(!bouquet[tree][color]) {
            leaves_picked++;
            bouquet[tree][color] = true;
        }
    }
    cout << leaves_picked << endl;

    return 0;
}
