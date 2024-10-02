#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;

        set <char> DistinctColour;
        for(char ch : a){
            DistinctColour.insert(ch);
        }
        for(char ch : b){
            DistinctColour.insert(ch);
        }
        
        int DistinctColourCount = DistinctColour.size();
        if(DistinctColourCount == 4){
            cout << "3" << endl;
        }
        else if(DistinctColourCount == 3){
            cout << "2" << endl;
        }
        else if(DistinctColourCount == 2){
            cout << "1" << endl;
        }
        else if(DistinctColourCount == 1){
            cout << "0" << endl;
        }
    }
    return 0;
}
