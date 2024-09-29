#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int condition = 1;

    for(int i = 0; i < input.size(); i++){
        if(input[i] == input[i + 1]){
            condition++;
            if(condition == 7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else{
            condition = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}
